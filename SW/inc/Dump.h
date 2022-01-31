/**
 * @file      Dump.h
 * @brief     A set of debugging functions to be used in other labs.
 * @details   Two debugging instruments<br>
 1) Debug_Capture will record data and time<br>
 2) Jitter_Measure will measure real time jitter<br>
 * @version   Spring 2022
 * @author    Put your name here
 * @copyright none
 * @warning   AS-IS
 * @note      For more information see  http://users.ece.utexas.edu/~valvano/
 * @date      January 24, 2022
 */
#ifndef __DUMP_H__ // do not include more than once
#define __DUMP_H__
#include <stdint.h>
/**
 * \brief DUMPBUFSIZE of the dump buffers 
 */
#define DUMPBUFSIZE 300

/**
 * @details Initialize debugging dump
 * @details Can hold 0 to DUMPBUFSIZE-1 elements. Each element is 32-bit data and 32-bit time.
 * @param  none
 * @return none
 * @brief  Initialize dump
 */
void Dump_Init(void);

/**
 * @details Dump 32-bit data into array. Records time and data.<br>
 * Reads TIMER1_TAR_R to get current 32-bit time 
 * @param  data is the value to record
 * @return none
 * @brief  Minimally intrusive dump
 */
void Dump_Capture(uint32_t data);

/**
 * @details How many elements are currently stored?
 * Returns DUMPBUFSIZE-1 if arrays are full
 * @param  none
 * @return a value from 0 to DUMPBUFSIZE-1
 * @brief  Current size of the buffers
 */
uint32_t Dump_Count(void);

/**
 * @details Look at debug data
 * @param  none
 * @return a pointer to the debug data buffer
 * @brief  Access debug data
 */
uint32_t* Dump_Data(void);

/**
 * @details Look at debug times
 * @param  none
 * @return a pointer to the debug time buffer
 * @brief  Access debug time
 */
uint32_t* Dump_Time(void);
 
/**
 * @details Initialize jitter recordings to determine if task is real time
 * @details Assumption: Jitter_Measure is called from a periodic real-time task.
 * Assumption: the period is fixed 
 * @param  none
 * @return none
 * @brief  Initialize jitter measurements
 */
void Jitter_Init(void);

/**
 * @details maintains maximum and minimum elasped times.<br>
 * First time called, Jitter_Measure just measures current time. <br>
 * Subsequent times called, Jitter_Measure measures the elapsed time from previous call
 * @param  none
 * @return none
 * @brief  measure jitter
 */
void Jitter_Measure(void);

/**
 * @details return maximum minus minimum elasped times.<br>
 * Result is the worst case from calling Jitter_Init to now. <br>
 * There is no error if this returns 0
 * @param  none
 * @return difference between maximum and minimum elasped times
 * @brief  returns time jitter
 */
uint32_t Jitter_Get(void);

#endif
