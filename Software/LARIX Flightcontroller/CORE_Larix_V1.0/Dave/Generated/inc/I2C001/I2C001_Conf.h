/*******************************************************************************
**  DAVE App Name : I2C001       App Version: 1.0.28               
**  This file is generated by DAVE, User modification to this file will be    **
**  overwritten at the next code generation.                                  **
*******************************************************************************/


/*CODE_BLOCK_BEGIN[I2C001_Conf.h]*/
/******************************************************************************
 *
 * Copyright (C) 2011 Infineon Technologies AG. All rights reserved.
 *
 * Infineon Technologies AG (Infineon) is supplying this software for use with 
 * Infineon's microcontrollers.  
 * This file can be freely distributed within development tools that are 
 * supporting such microcontrollers. 
 *
 * THIS SOFTWARE IS PROVIDED "AS IS".  NO WARRANTIES, WHETHER EXPRESS, IMPLIED
 * OR STATUTORY, INCLUDING, BUT NOT LIMITED TO, IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE APPLY TO THIS SOFTWARE.
 * INFINEON SHALL NOT, IN ANY CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL, 
 * OR CONSEQUENTIAL DAMAGES, FOR ANY REASON WHATSOEVER.
 *
*******************************************************************************
**                                                                           **
**                                                                           **
** PLATFORM : Infineon XMC4000/XMC1000 Series                                **
**                                                                           **
** COMPILER : Compiler Independent                                           **
**                                                                           **
** AUTHOR   : App Developer                                                  **
**                                                                           **
** MAY BE CHANGED BY USER [yes/no]: Yes                                      **
**                                                                           **
** MODIFICATION DATE : Jan 28, 2013                                          **
******************************************************************************/


/**
 * @file   I2C001_Conf.h
 *
 * @App Version I2C001 <1.0.28>
 *
 * @brief  Configuration file generated based on UI settings 
 *         of I2C001 App
 *
 */
/*
 * Revision History
 * 28 Jan 2013 v1.0.22 Changes from v1.0.12 are
 *                     1. Modified as per coding guidelines and MISRA checks.
 *                     2. Added file revision history.
 *                     3. Updated to support XMC1000 devices.
 *
 */

#ifndef _CONF_I2C001_H_
#define _CONF_I2C001_H_

#ifdef __cplusplus
extern "C" {
#endif

/******************************************************************************
** @Defines
******************************************************************************/

#include <DAVE3.h>


/*Base Address of mapped USIC Module for App Instance 0 */
#define I2C001_0_USIC 	  USIC2
/*Base Address of mapped USIC Channel for App Instance 0 */
#define I2C001_0_USIC_CH  USIC2_CH0
/*Base Address of mapped USIC Module for App Instance 1 */
#define I2C001_1_USIC 	  USIC0
/*Base Address of mapped USIC Channel for App Instance 1 */
#define I2C001_1_USIC_CH  USIC0_CH1
extern const I2C001Handle_type I2C001_Handle0; 

extern const I2C001Handle_type I2C001_Handle1; 
 

#ifdef __cplusplus
}
#endif  

#endif  /* ifndef _CONF_I2C001_H_ */

/*CODE_BLOCK_END*/

