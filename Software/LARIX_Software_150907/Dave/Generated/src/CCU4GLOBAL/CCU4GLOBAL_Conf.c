/*******************************************************************************
**  DAVE App Name : CCU4GLOBAL       App Version: 1.0.22               
**  This file is generated by DAVE, User modification to this file will be    **
**  overwritten at the next code generation.                                  **
*******************************************************************************/


/*CODE_BLOCK_BEGIN[CCU4Global_Conf.c]*/

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
** PLATFORM : Infineon XMC4000/XMC1000 Series                                 **
**                                                                            **
** COMPILER : Compiler Independent                                            **
**                                                                            **
** AUTHOR   : App Developer                                                   **
**                                                                            **
** MAY BE CHANGED BY USER [yes/no]: Yes                                       **
**                                                                            **
** MODIFICATION DATE : November 25, 2013                                     **
**                                                                            **
*******************************************************************************/

/*******************************************************************************
**                       Author(s) Identity                                   **
********************************************************************************
**                                                                            **
** Initials     Name                                                          **
** ---------------------------------------------------------------------------**
** SNR           App Developer                                                **
*******************************************************************************/
/**
 * @file  CCU4Global_Confc.c
 * @App Version CCU4Global <1.0.22>
 * @brief This file contains the Handles or the generated configuration for the 
 * App.
 *
 */
/* Revision History
 * 22 March  2012   v1.0.0  Initial version
 * 17 Sept   2012   v1.0.6 	Removed the slice uri static definition 
 * 25 Nov    2013   v1.0.12 Followed coding guidelines
 * 02 Jan    2014   v1.0.18 Mapped the handle number with app instance number
 */

/*******************************************************************************
 ** INCLUDE FILES                                                             **
 ******************************************************************************/
#include "../../inc/CCU4Global/CCU4Global.h"


/**
 * @ingroup CCU4Global_publicparam
 * @{
 */



const CCU4Global_HandleType CCU4Global_Handle0 =
{
  .CC4yKernRegsPtr = (CCU4_GLOBAL_TypeDef*) CCU40_BASE,
  .KernelNumber = 0,
  
	#if ((__TARGET_DEVICE__ == XMC44) || (__TARGET_DEVICE__ == XMC42) || \
	     (__TARGET_DEVICE__ == XMC41) || (UC_FAMILY == XMC1))
	.ClockGating = SCU_CLK_CGATCLR0_CCU40_Pos,
	
	#endif

  	#if (UC_FAMILY == XMC4)
	
	.PeripheralReset = PER0_CCU40
	
	#endif

};
    


const CCU4Global_HandleType CCU4Global_Handle1 =
{
  .CC4yKernRegsPtr = (CCU4_GLOBAL_TypeDef*) CCU42_BASE,
  .KernelNumber = 2,
  
	#if ((__TARGET_DEVICE__ == XMC44) || (__TARGET_DEVICE__ == XMC42) || \
	     (__TARGET_DEVICE__ == XMC41) || (UC_FAMILY == XMC1))
	.ClockGating = SCU_CLK_CGATCLR0_CCU42_Pos,
	
	#endif

  	#if (UC_FAMILY == XMC4)
	
	.PeripheralReset = PER0_CCU42
	
	#endif

};
    


const CCU4Global_HandleType CCU4Global_Handle2 =
{
  .CC4yKernRegsPtr = (CCU4_GLOBAL_TypeDef*) CCU41_BASE,
  .KernelNumber = 1,
  
	#if ((__TARGET_DEVICE__ == XMC44) || (__TARGET_DEVICE__ == XMC42) || \
	     (__TARGET_DEVICE__ == XMC41) || (UC_FAMILY == XMC1))
	.ClockGating = SCU_CLK_CGATCLR0_CCU41_Pos,
	
	#endif

  	#if (UC_FAMILY == XMC4)
	
	.PeripheralReset = PER0_CCU41
	
	#endif

};
      

const CCU4Global_HandleType * CCU4Global_HandleArray[CCU4GLOBAL_NUM_INSTANCES] =
{
   &CCU4Global_Handle0, 
   &CCU4Global_Handle1, 
   &CCU4Global_Handle2 
};

/**
 * @}
 */
/*CODE_BLOCK_END*/

