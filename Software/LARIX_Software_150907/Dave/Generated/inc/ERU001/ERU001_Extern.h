/*******************************************************************************
**  DAVE App Name : ERU001       App Version: 1.0.16               
**  This file is generated by DAVE, User modification to this file will be    **
**  overwritten at the next code generation.                                  **
*******************************************************************************/


/*CODE_BLOCK_BEGIN[ERU001_Extern.H]*/

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
** PLATFORM : Infineon XMC4000/XMC1000 Series                                 **
**                                                                            **
** COMPILER : Compiler Independent                                            **
**                                                                            **
** AUTHOR   : App Developer                                                   **
**                                                                            **
** NOTE     : Any Changes made to this file will be overwritten during Code   **
**            Generation                                                      **
**                                                                            **
********************************************************************************
** VERSION HISTORY:
********************************************************************************
** v1.0.10, 30 Sep 2013,  BRG: Code has been updated in complaint to coding 
**                             guidelines. (Initial version)
**
*******************************************************************************/

/**
 * @file ERU001_Extern.H
 *
 * @brief  This file contains extern declarations of ERU001.
 *
 */

#ifndef ERU001_EXTERN_H_
#define ERU001_EXTERN_H_

#ifdef __cplusplus
extern "C" {
#endif

/*******************************************************************************
**                      Include Files                                         **
*******************************************************************************/


/*******************************************************************************
**                      GLOBAL MACRO DEFINITIONS:
*******************************************************************************/

/*******************************************************************************
**                      GLOBAL VARIABLE DEFINITIONS:
*******************************************************************************/

/*******************************************************************************
**                      GLOBAL TYPE DEFINITIONS:
*******************************************************************************/

/*******************************************************************************
 *                      STRUCTURES                                            **
 ******************************************************************************/

/*******************************************************************************
**                      ENUMERATIONS:
*******************************************************************************/

/*******************************************************************************
**                      Global Constant Declarations                          **
*******************************************************************************/

/*******************************************************************************
**                      External Variables                                    **
*******************************************************************************/
/* Extend visibility of below variable of type ERU001_HandleType to  
 * other files */

extern const ERU001_HandleType ERU001_Handle0; 
extern const ERU001_HandleType ERU001_Handle1; 

/* Extend the scope of variable 'ERU001_HandleArray' to other files */
extern ERU001_HandleType * ERU001_HandleArray[];

/*******************************************************************************
**                      FUNCTION PROTOTYPES                                    **
*******************************************************************************/

#ifdef __cplusplus
}
#endif

#endif /* ERU001_EXTERN_H_ */

