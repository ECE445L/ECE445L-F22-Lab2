// Dump.c
// Runs on TM4C123
// EE445L Lab 2 starter file
// A set of debugging functions to be used in other labs
#include <stdint.h>
#include "../inc/Dump.h"
#include "../inc/tm4c123gh6pm.h"
// Global variables
uint32_t Dump_TimeBuf[DUMPBUFSIZE];
uint32_t Dump_DataBuf[DUMPBUFSIZE];
uint32_t Dump_Num;
void Timer1_Init(void){
  volatile uint32_t delay;
  SYSCTL_RCGCTIMER_R    |= 0x02;                // 0) activate TIMER1
  delay                  = SYSCTL_RCGCTIMER_R;  // allow time to finish activating
  TIMER1_CTL_R           = 0x00000000;          // 1) disable TIMER1A during setup
  TIMER1_CFG_R           = 0x00000000;          // 2) configure for 32-bit mode
  TIMER1_TAMR_R          = 0x00000002;          // 3) configure for periodic mode, default down-count settings
  TIMER1_TAILR_R         = 0xFFFFFFFF;          // 4) reload value
  TIMER1_TAPR_R          = 0;                   // 5) bus clock resolution
  TIMER1_CTL_R           = 0x00000001;          // 10) enable TIMER1A
}
void Dump_Init(void){
    // Lab 2, write this
}
uint32_t Dump_Count(void){ 
    // Lab 2, write this
  return 0;
}
uint32_t* Dump_Data(void){ 
  return Dump_DataBuf;
}
uint32_t* Dump_Time(void){ 
  return Dump_TimeBuf;
}
void Dump_Capture(uint32_t data){
  // Lab 2, write this
  // Use TIMER1_TAR_R as current time
}


// Assumption: Jitter_Measure is called from a periodic real-time task
// Assumption: the period is fixed and known
// Input: period is expected elapsed time (in 12.5ns) for real time system
// Output: none
void Jitter_Init(void){
  // Lab 2, write this
}

// first time called, Jitter_Measure just measures current time
// subsequent times called, Jitter_Measure measures the elapsed time from previous call
// maintains maximum and minimum elasped times
void Jitter_Measure(void){
    // Lab 2, write this
}

// return difference between maximum and minimum elasped times
// Input: none
// Output: returns time jitter
uint32_t Jitter_Get(void){
  // Lab 2, write this
  return 42;
}




