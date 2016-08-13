/*******************************************************************************
**  DAVE App Name : IO002       App Version: 1.0.30               
**  This file is generated by DAVE, User modification to this file will be    **
**  overwritten at the next code generation.                                  **
*******************************************************************************/


/*CODE_BLOCK_BEGIN[IO002_Conf.c]*/
/*******************************************************************************
 Copyright (c) 2013, Infineon Technologies AG                                 **
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
** MODIFICATION DATE : Jan 1, 2014                                           **
**                                                                            **
**                                                                            **
*******************************************************************************/
/**
 * @file   IO002_Conf.c
 *
 * @brief  Configuration file generated based on UI settings 
 *         of IO002 App
 */
/* Revision History 
 * 1. Jan 2013 v1.0.12  Ported to XMC1000 Devices, MISRA errors fixed.
 * 2. Oct 2013 v1.0.24  Updated for separating static and dynamic code.
 * 3. Jan1,2014 v1.0.26 Updated the file to fix the instance removal numbering issue
 * 4. Jan06,2014 v1.0.28 Updated the issue with port 14 pad register access.
 */

/*******************************************************************************
 ** INCLUDE FILES                                                             **
 ******************************************************************************/
#include "../../inc/IO002/IO002.h"


   

const IO002_HandleType IO002_Handle0 = {
  .PortNr   = 0U , /* Mapped Port */
  .PortPin  = 5U,   /* Mapped Pin */
  .OMR_PS = 0U,/* omr_ps value*/
  .PDR_PD = 0U,/* pdr_pd value*/
  .HW_SEL = 0U,/* IO002_irwHWControl value */
  .IOCR_PCR = 0U,/* iocr_pcr value*/
  .IOCR_PCR2 = 0U,/* IO002_inputchardummy value*/
  .IOCR_PO = 0U,/* iocr_po value*/
  .IOCR = 0U,/* iocr_po value left shifted by 3*/
  .IOCR_OE = 0U,/* iocr_oe value*/
  .PHCR_EN = 0U,/* IO002_erwPadHysteresis value*/  
  .PDR0_MSK = PORT0_PDR0_PD5_Msk,/* pad driver 0 mask*/
  .PDR0_POS = PORT0_PDR0_PD5_Pos,/* pad driver 0 position*/
	       
  .PortRegs = (PORTS_TypeDef*)PORT0_BASE, /* Port Base Address*/ 
	
  .pdr0_ptr = (__IO uint32_t*)&(((PORTS_TypeDef*)PORT0_BASE)->PDR0)
	
      
};   

const IO002_HandleType IO002_Handle1 = {
  .PortNr   = 1U , /* Mapped Port */
  .PortPin  = 15U,   /* Mapped Pin */
  .OMR_PS = 0U,/* omr_ps value*/
  .PDR_PD = 0U,/* pdr_pd value*/
  .HW_SEL = 0U,/* IO002_irwHWControl value */
  .IOCR_PCR = 0U,/* iocr_pcr value*/
  .IOCR_PCR2 = 0U,/* IO002_inputchardummy value*/
  .IOCR_PO = 0U,/* iocr_po value*/
  .IOCR = 0U,/* iocr_po value left shifted by 3*/
  .IOCR_OE = 0U,/* iocr_oe value*/
  .PHCR_EN = 0U,/* IO002_erwPadHysteresis value*/  
	.PDR1_MSK = PORT1_PDR1_PD15_Msk,/* pad driver 1 mask*/
	.PDR1_POS = PORT1_PDR1_PD15_Pos,/* pad driver 1 position*/
	       
  .PortRegs = (PORTS_TypeDef*)PORT1_BASE, /* Port Base Address*/ 
	
	.pdr1_ptr = (__IO uint32_t*)&(((PORTS_TypeDef*)PORT1_BASE)->PDR1)
	
      
};



const IO002_HandleType * IO002_HandleArr[IO002_NUM_INSTANCES] =
{  

	&IO002_Handle0, 
	&IO002_Handle1 
};

  
/*CODE_BLOCK_END*/

