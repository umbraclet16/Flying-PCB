/*******************************************************************************
**  DAVE App Name : NVIC002       App Version: 1.0.28               
**  This file is generated by DAVE, User modification to this file will be    **
**  overwritten at the next code generation.                                  **
*******************************************************************************/


/*CODE_BLOCK_BEGIN[NVIC002_Conf.c]*/
/*******************************************************************************
 Copyright (c) 2014, Infineon Technologies AG                                 **
 All rights reserved.                                                         **
                                                                              **
 Redistribution and use in source and binary forms, with or without           **
 modification,are permitted provided that the following conditions are met:   **
                                                                              **
 *Redistributions of source code must retain the above copyright notice,      **
 this list of conditions and the following disclaimer.                        **
 *Redistributions in binary form must reproduce the above copyright notice,   **
 this list of conditions and the following disclaimer in the documentation    **
 and/or other materials provided with the distribution.                       **
 *Neither the name of the copyright holders nor the names of its contributors **
 may be used to endorse or promote products derived from this software without** 
 specific prior written permission.                                           **
                                                                              **
 THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"  **
 AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE    **
 IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE   **
 ARE  DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE   **
 LIABLE  FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR         **
 CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF         **
 SUBSTITUTE GOODS OR  SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS    **
 INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN      **
 CONTRACT, STRICT LIABILITY,OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)       **
 ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE   **
 POSSIBILITY OF SUCH DAMAGE.                                                  **
                                                                              **
 To improve the quality of the software, users are encouraged to share        **
 modifications, enhancements or bug fixes with Infineon Technologies AG       **
 dave@infineon.com).                                                          **
                                                                              **
********************************************************************************
**                                                                            **
**                                                                            **
** PLATFORM : Infineon XMC4000/XMC1000 Series   		            	      **
**                                                                            **
** COMPILER : Compiler Independent                                            **
**                                                                            **
** AUTHOR   : App Developer                                                   **
**                                                                            **
** MAY BE CHANGED BY USER [yes/no]: Yes                                       **
**                                                                            **
** MODIFICATION DATE : July 17, 2014                                          **
*******************************************************************************/
/*******************************************************************************
**                       Author(s) Identity                                   **
********************************************************************************
**                                                                            **
** Initials     Name                                                          **
** ---------------------------------------------------------------------------**
** SNR          App Developer                                                 **
*******************************************************************************/
/**
 * @file   NVIC002_Conf.c
 *
 * @App    Version NVIC002 <1.0.28>
 * 
 * @brief  Configuration file generated based on UI settings 
 *         of NVIC002 App
 *
 */
/* Revision History	
 * 18 Feb 2013 	 v1.0.12   Conditional Codes are added to support both 
 * 	                       XMC4000/XMC1000 devices.
 * 18 Oct 2013   v1.0.20   Updated as per coding guidelines	     
 * 17 Jul 2014   v1.0.28   End of line is corrected                  
 */

/*******************************************************************************
 ** INCLUDE FILES                                                             **
 ******************************************************************************/
#include "../../inc/NVIC002/NVIC002.h"
/**
 * @ingroup NVIC002_publicparam
 * @{
 */

   
const NVIC002_HandleType NVIC002_Handle0 = {
   /* Mapped NVIC Node */
  .NodeID      = 90 , 
  /* Node Interrupt Priority */
  .Priority    = 20,  
  /* Node Interrupt SubPriority */
  .SubPriority = 0,
  /* Interrupt enable for Node90 */
  .InterruptEnable = 1
};
   
const NVIC002_HandleType NVIC002_Handle1 = {
   /* Mapped NVIC Node */
  .NodeID      = 45 , 
  /* Node Interrupt Priority */
  .Priority    = 15,  
  /* Node Interrupt SubPriority */
  .SubPriority = 0,
  /* Interrupt enable for Node45 */
  .InterruptEnable = 1
};
   
const NVIC002_HandleType NVIC002_Handle10 = {
   /* Mapped NVIC Node */
  .NodeID      = 89 , 
  /* Node Interrupt Priority */
  .Priority    = 63,  
  /* Node Interrupt SubPriority */
  .SubPriority = 0,
  /* Interrupt enable for Node89 */
  .InterruptEnable = 1
};
   
const NVIC002_HandleType NVIC002_Handle11 = {
   /* Mapped NVIC Node */
  .NodeID      = 98 , 
  /* Node Interrupt Priority */
  .Priority    = 63,  
  /* Node Interrupt SubPriority */
  .SubPriority = 0,
  /* Interrupt enable for Node98 */
  .InterruptEnable = 1
};
   
const NVIC002_HandleType NVIC002_Handle12 = {
   /* Mapped NVIC Node */
  .NodeID      = 46 , 
  /* Node Interrupt Priority */
  .Priority    = 20,  
  /* Node Interrupt SubPriority */
  .SubPriority = 0,
  /* Interrupt enable for Node46 */
  .InterruptEnable = 1
};
   
const NVIC002_HandleType NVIC002_Handle2 = {
   /* Mapped NVIC Node */
  .NodeID      = 44 , 
  /* Node Interrupt Priority */
  .Priority    = 5,  
  /* Node Interrupt SubPriority */
  .SubPriority = 0,
  /* Interrupt enable for Node44 */
  .InterruptEnable = 1
};
   
const NVIC002_HandleType NVIC002_Handle3 = {
   /* Mapped NVIC Node */
  .NodeID      = 5 , 
  /* Node Interrupt Priority */
  .Priority    = 10,  
  /* Node Interrupt SubPriority */
  .SubPriority = 0,
  /* Interrupt enable for Node5 */
  .InterruptEnable = 0
};
   
const NVIC002_HandleType NVIC002_Handle4 = {
   /* Mapped NVIC Node */
  .NodeID      = 47 , 
  /* Node Interrupt Priority */
  .Priority    = 63,  
  /* Node Interrupt SubPriority */
  .SubPriority = 0,
  /* Interrupt enable for Node47 */
  .InterruptEnable = 1
};
   
const NVIC002_HandleType NVIC002_Handle5 = {
   /* Mapped NVIC Node */
  .NodeID      = 87 , 
  /* Node Interrupt Priority */
  .Priority    = 15,  
  /* Node Interrupt SubPriority */
  .SubPriority = 0,
  /* Interrupt enable for Node87 */
  .InterruptEnable = 1
};
   
const NVIC002_HandleType NVIC002_Handle6 = {
   /* Mapped NVIC Node */
  .NodeID      = 49 , 
  /* Node Interrupt Priority */
  .Priority    = 20,  
  /* Node Interrupt SubPriority */
  .SubPriority = 0,
  /* Interrupt enable for Node49 */
  .InterruptEnable = 1
};
   
const NVIC002_HandleType NVIC002_Handle7 = {
   /* Mapped NVIC Node */
  .NodeID      = 48 , 
  /* Node Interrupt Priority */
  .Priority    = 25,  
  /* Node Interrupt SubPriority */
  .SubPriority = 0,
  /* Interrupt enable for Node48 */
  .InterruptEnable = 1
};
   
const NVIC002_HandleType NVIC002_Handle8 = {
   /* Mapped NVIC Node */
  .NodeID      = 16 , 
  /* Node Interrupt Priority */
  .Priority    = 30,  
  /* Node Interrupt SubPriority */
  .SubPriority = 0,
  /* Interrupt enable for Node16 */
  .InterruptEnable = 1
};
   
const NVIC002_HandleType NVIC002_Handle9 = {
   /* Mapped NVIC Node */
  .NodeID      = 8 , 
  /* Node Interrupt Priority */
  .Priority    = 15,  
  /* Node Interrupt SubPriority */
  .SubPriority = 0,
  /* Interrupt enable for Node8 */
  .InterruptEnable = 1
}; 
const NVIC002_HandleType * NVIC002_HandleArray[NVIC002_NUM_INSTANCES] =
{
   &NVIC002_Handle0, 
   &NVIC002_Handle1, 
   &NVIC002_Handle10, 
   &NVIC002_Handle11, 
   &NVIC002_Handle12, 
   &NVIC002_Handle2, 
   &NVIC002_Handle3, 
   &NVIC002_Handle4, 
   &NVIC002_Handle5, 
   &NVIC002_Handle6, 
   &NVIC002_Handle7, 
   &NVIC002_Handle8, 
   &NVIC002_Handle9 

};
/**
 * @}
 */

/*CODE_BLOCK_END*/
