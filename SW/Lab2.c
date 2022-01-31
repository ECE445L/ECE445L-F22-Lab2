/**
 * @file Lab2.c
 * @author your name (you@domain.com), Jonathan Valvano, Matthew Yu
 *    <TA NAME and LAB SECTION # HERE>
 * @brief
 *    Possible main program to test Lab 2.
 *    Feel free to edit this to match your specifications.
 *
 *    For this lab, the student must implement the following functions defined
 *    in Dump.h: 
 *        - DumpInit
 *        - DumpCapture
 *        - DumpCount
 *        - DumpData
 *        - DumpTime
 *        - JitterInit
 *        - JitterMeasure
 *        - JitterGet
 * 
 * @version 0.1
 * @date 2022-01-19 <REPLACE WITH DATE OF LAST REVISION>
 *
 * @copyright Copyright (c) 2022
 * @note Pinout:
 *    Backlight (pin 10) connected to +3.3 V
 *    MISO (pin 9) unconnected
 *    SCK (pin 8) connected to PA2 (SSI0Clk)
 *    MOSI (pin 7) connected to PA5 (SSI0Tx)
 *    TFT_CS (pin 6) connected to PA3 (SSI0Fss)
 *    CARD_CS (pin 5) unconnected
 *    Data/Command (pin 4) connected to PA6 (GPIO)
 *    RESET (pin 3) connected to PA7 (GPIO)
 *    VCC (pin 2) connected to +3.3 V
 *    Gnd (pin 1) connected to ground
 * 
 *    Center of 10k-ohm potentiometer connected to PE2/AIN1
 *    Bottom of 10k-ohm potentiometer connected to ground
 *    Top of 10k-ohm potentiometer connected to +3.3V 
 */

/* This example accompanies the book
   "Embedded Systems: Real Time Interfacing to Arm Cortex M Microcontrollers",
   ISBN: 978-1463590154, Jonathan Valvano, copyright (c) 2021

 Copyright 2022 by Jonathan W. Valvano, valvano@mail.utexas.edu
    You may use, edit, run or distribute this file
    as long as the above copyright notice remains
 THIS SOFTWARE IS PROVIDED "AS IS".  NO WARRANTIES, WHETHER EXPRESS, IMPLIED
 OR STATUTORY, INCLUDING, BUT NOT LIMITED TO, IMPLIED WARRANTIES OF
 MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE APPLY TO THIS SOFTWARE.
 VALVANO SHALL NOT, IN ANY CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL,
 OR CONSEQUENTIAL DAMAGES, FOR ANY REASON WHATSOEVER.
 For more information about my classes, my research, and my books, see
 http://users.ece.utexas.edu/~valvano/
 */

/** File includes. */
#include <stdio.h>
#include <stdint.h>
#include <math.h>
#include "./inc/ADCSWTrigger.h"
#include "./inc/tm4c123gh6pm.h"
#include "./inc/PLL.h"
#include "./inc/Timer0A.h"
#include "./inc/Timer2A.h"
#include "./inc/ST7735.h"
#include "./inc/CortexM.h"
#include "./inc/LaunchPad.h"
#include "./inc/Dump.h"
#include "./inc/TExaS.h"


/** MMAP Pin definitions. */
#define PF2   (*((volatile uint32_t *)0x40025010))
#define PF3   (*((volatile uint32_t *)0x40025020))
#define PF4   (*((volatile uint32_t *)0x40025040))


/** Function declarations. */


/** Global variables. */


/** Main functions. */


/** Function Implementations. */

