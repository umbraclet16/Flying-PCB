/*******************************************************************************
**  DAVE App Name : LIBS       App Version: 1.0.28               
**  This file is generated by DAVE, User modification to this file will be    **
**  overwritten at the next code generation.                                  **
*******************************************************************************/


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
********************************************************************************
**                                                                            **
**                                                                            **
** PLATFORM : Infineon XMC4000 Series /XMC1000 Series                         **
**                                                                            **
** COMPILER : Compiler Independent                                            **
**                                                                            **
** AUTHOR   : App Developer                                                   **
**                                                                            **
** MAY BE CHANGED BY USER [yes/no]: Yes                                       **
**                                                                            **
** MODIFICATION DATE : 27 Sept, 2013                                          **
**                                                                            **
*******************************************************************************/

/*******************************************************************************
**                       Author(s) Identity                                   **
********************************************************************************
**                                                                            **
** Initials     Name                                                          **
** ---------------------------------------------------------------------------**
** PA           App Developer                                                 **
*******************************************************************************/
/**
 * @file MOTORLIB.h
 *
 * @brief This file contains all public data structures,enums and function
 *        prototypes for motor control library.
 *
 */
/* Revision History
 * 03 Apr 2013   v1.0.0    Initial version
 * 25 Apr 2013   v1.0.2    Added support for XMC1302
 * 29 May 2013   v1.0.12   Added FOC support for XMC1302
 * 21 Jun 2013   v1.0.14   Added support for XMC4400 and XMC4200 device
 * 24 Jul 2013   v1.0.18   Added FOC support for XMC4400 device
 * 27 Sept 2013  v1.0.21   Added FOC support for XMC45 & XMC42 device
 */ 
#ifndef MOTORLIBS_H_
#define MOTORLIBS_H_
/*******************************************************************************
**                      Include Files                                         **
*******************************************************************************/
#include <DAVE3.h>

/**
  * @ingroup MOTORLIBS_publicparam
  * @{
  */
/*******************************************************************************
**                      Global Macro Definitions                              **
*******************************************************************************/    
/*Limit1 is the higher limit and Limit2 is the lower limit and Buffer is the value which need to compare*/
/**This is Clarke Transformation Scaling*/
#define MOTORLIBS_CLARKESCALE  (0x01U)

/**This is Inverse of Square root of 3 (1/sqrt(3)*2^15)*/
#define MOTORLIBS_INVSQRT3 (0x49E6)

/**This is Angle Scaling - Convert 24 bit to 16 bit*/
#define MOTORLIBS_ANGLESCALE  (0x08U)

/**This is Amplitude Scaling - Convert 24 bit to 16 bit*/
#define MOTORLIBS_AMPSCALE  (0x08U)

/**This is PI Controller KP Values SCaling*/
#define MOTORLIBS_PI_KPSCALE  (0x09U)

/**This is PI Controller KI Values SCaling*/
#define MOTORLIBS_PI_KISCALE  (0x0FU)

/*Limit1 is the higher limit and Limit2 is the lower limit and Buffer is the value which need to compare*/
#define MOTORLIBS_MIN_MAX_LIMIT(Buffer,Limit1,Limit2) ((Buffer) > (Limit1)) ? (Limit1) : (((Buffer) < (Limit2))? (Limit2): (Buffer))
/**This is used to find out the absolute value*/
#define MOTORLIBS_ABS(x) ((x > 0) ? x : -x)

/**This is CORIDC K values used in SW CORIDC*/
#define CORDIC_K 			1304065792U

/**This is CORIDC Iteration, maximum values is 23*/
#define CORDIC_ITERATIONS	15

/**
 * This enumerates magnitude prescaler value for calculated value of X & Y
 */
typedef enum
{
  /**
   * After the last iteration of calculation the X & Y values are divided by 1
   */
  MOTORLIBS_MPS_DIVBY1 = 0x00U,
  /**
   * After the last iteration of calculation the X & Y values are divided by 2
   */
  MOTORLIBS_MPS_DIVBY2 = 0x01U,
  /**
   * After the last iteration of calculation the X & Y values are divided by 4
   */
  MOTORLIBS_MPS_DIVBY4 = 0x02U
}MOTORLIBS_CON_MPS;

/*******************************************************************************
 *                                ENUMERATIONS                                **
 ******************************************************************************/

/*******************************************************************************
 *                             STRUCTURES                                     **
 ******************************************************************************/
/**
 * This structure holds the values of PI parameters.
 */
typedef struct MOTORLIBS_PIHandleType
{
  /**
   * This is the Kp value
   */
  uint16_t  Kp;  
 /**
  * This is the Ki value
  */
  uint16_t  Ki; 
 /**
  * This is the buffer
  */
  int32_t  Ibuf; 
  /**
   * Maximum limit for buffer
   */
  const int32_t  Yimax;    
  /**
   * Minimum limit for buffer
   */
  const int32_t  Yimin; 
  /**
   * Maximum limit for PI controller output
   */
  const int16_t  Ymax;     
  /**
   * Minimum limit for PI controller output
   */
  const int16_t  Ymin; 
  /**
   * This is the required output value for PI controller
   */  
  int16_t PiOutVal;
  
} MOTORLIBS_PIHandleType;
 
/**
 * This structure holds the values of PT1 filter parameters.
 */
typedef struct MOTORLIBS_PT1HandleType
{
  /**
   * Filter constant 
   */
  int32_t  Z1;
  /**
   * Filter constant 
   */
  int32_t  Z2;
  /**
   * Maximum limit of PT1 buffer
   */
  const int32_t  Ymax;
  /**
   * Minimum limit of PT1 buffer
   */
  const int32_t  Ymin;
  /**
   * This is the integral buffer of pt1 filter
   */
  int32_t  PT1buf;
  /**
   * This is PT1 filter output.
   */
  int32_t  PT1OutVal;
  
} MOTORLIBS_PT1HandleType;
 
/**
 * @}
 */
/**
 * @ingroup MOTORLIBS_apidoc
 * @{
 */
/*******************************************************************************
 **FUNCTION PROTOTYPES                                                        **
*******************************************************************************/
/**
  * @brief This function is the implementation of PI controller. 
  * PI Output = kp*error + Ki * integral of error
  * @param[in] HandlePtr Pointer to MOTORLIBS_PIHandleType
  * @param[in] RefValue int32_t which is reference value for PI controller
  * @param[in] ActValue int32_t which is actual value for PI controller
  * 
  * @return   void <BR>
  * <b>Reentrancy:  Yes</b><BR>
  * 
  * <b>Sync/Async:  Synchronous</b><BR>
  */
void MOTORLIBS_PIController
(
    MOTORLIBS_PIHandleType* HandlePtr,
    int32_t RefValue,
    int32_t ActValue
);
/**
  * @brief This function is the implementation of PT1 filter. 
  * Yn[3,2,1,0]  =Yn-1[3,2,1,0] +Z1*(Xn -Yn-1[3,2])
  * @param[in] HandlePtr PT1 Handle of the MOTORLIBS App
  * @param[in] ActValue int32_t which is actual value for PT1 filter
  * 
  * @return  void <BR>
  * <b>Reentrancy:  Yes</b><BR>
  * 
  * <b>Sync/Async:  Synchronous</b><BR>
  */
void MOTORLIBS_PT1Controller
(
   MOTORLIBS_PT1HandleType* HandlePtr,
   int32_t ActValue
);
/**
  * @brief This function is the implementation of PT12 filter. 
  * Yn[3,2,1,0]  =Yn-1[3,2,1,0] +(Z1*Xn -Z2*Yn-1[3,2])
  * @param[in] HandlePtr PT1 Handle of the MOTORLIBS App
  * @param[in] ActValue int32_t which is actual value for PT1 filter
  * 
  * @return  void <BR>
  * <b>Reentrancy:  Yes</b><BR>
  * 
  * <b>Sync/Async:  Synchronous</b><BR>
  */
void MOTORLIBS_PT12Controller
(
   MOTORLIBS_PT1HandleType* HandlePtr,
   int32_t ActValue
);

/**
  * @brief This function is the implementation of clark transform.
  * Ialpha = Phase_A/2
  * Ibeta  = (Phase_A+2*Phase_B)/(2*Sqrt(3))
  * @param[in] Phase_A  int32_t
  * @param[in] Phase_B  int32_t
  * @param[in] Ialpha pointer to int32_t.
  * 
  * @return  int32_t <BR>
  *         
  *         
  * <b>Reentrancy:  Yes</b><BR>
  * 
  * <b>Sync/Async:  Synchronous</b><BR>
  */
int32_t MOTORLIBS_ClarkTransform(int32_t Phase_A, int32_t Phase_B, int32_t *Ialpha );
/**
  * @brief This function is the implementation of clark transform.
  * Ialpha = Phase_A/2
  * Ibeta  = (Phase_B-Phase_C)/(2*Sqrt(3))
  * @param[in] Phase_A  int32_t
  * @param[in] Phase_B  int32_t
  * @param[in] Phase_C  int32_t
  * @param[in] Ialpha pointer to int32_t.
  * 
  * @return  int32_t <BR>
  *         
  *         
  * <b>Reentrancy:  Yes</b><BR>
  * 
  * <b>Sync/Async:  Synchronous</b><BR>
  */
int32_t MOTORLIBS_ClarkTransform2(int32_t Phase_A, int32_t Phase_B, int32_t Phase_C, int32_t *Ialpha );
/**
  * @brief This function is the implementation of park transform. 
  * Id  =k*(Ialpha*cos(Anlge)+Ibeta*sin(Angle))/2  ; where k = 1.64767
  * Iq  =k*(-Ialpha*sin(Anlge)+Ibeta*cos(Angle))/2 ; where k = 1.64767
  * @param[in] Ialpha int32_t
  * @param[in] Ibeta  int32_t
  * @param[in] Angle  int16_t
  * @param[in] Iq pointer to int32_t.
  * 
  * @return  int32_t <BR>
  *         
  *         
  * <b>Reentrancy:  Yes</b><BR>
  * 
  * <b>Sync/Async:  Synchronous</b><BR>
  */
int32_t MOTORLIBS_ParkTransform(int32_t Ialpha,int32_t Ibeta,int16_t Angle,int32_t *Iq);

/**
  * @brief This function is the implementation of inverse park transform. 
  * Valpha  = k*(Vd*cos(Anlge)- Vq*sin(Angle))/4 ; where k = 1.64767
  * Vbeta   = k*(Vd*sin(Anlge)+Vq*cos(Angle))/4 ; where k = 1.64767
  * @param[in] Vd  int32_t
  * @param[in] Vq  int32_t
  * @param[in] Angle int16_t
  * @param[in] Vbeta pointer to int32_t.
  * 
  * @return  int32_t <BR>
  *         
  *         
  * <b>Reentrancy:  Yes</b><BR>
  * 
  * <b>Sync/Async:  Synchronous</b><BR>
  */

int32_t MOTORLIBS_IParkTransform(int32_t Vd,int32_t Vq,int16_t Angle,int32_t *Vbeta);

/**
  * @brief This function is the implementation cartesian to polar transform. 
  * Amlpitude  = K * SQRT(x*x+y*y); where k = 1.64767
  * Angle      = ATAN(y/x);
  * @param[in] x  int32_t
  * @param[in] y  int32_t
  * @param[in] Angle pointer to int16_t.
  * 
  * @return  uint32_t <BR>
  *         
  *         
  * <b>Reentrancy:  Yes</b><BR>
  * 
  * <b>Sync/Async:  Synchronous</b><BR>
  */
uint32_t MOTORLIBS_Car2Pol(int32_t x,int32_t y, int16_t *Angle);
/**
  * @brief This function is the implementation polar to cartesian transform. 
  * X = K * Amplitude* cos(Angle); where k = 1.64767
  * Y = K * Amplitude* sin(Angle); where k = 1.64767
  * @param[in] Angle  int16_t
  * @param[in] Amplitude  uint32_t
  * @param[in] X pointer to int32_t holding the x co-ordinate value.
  * 
  * @return  int32_t <BR>
  *         
  *         
  * <b>Reentrancy:  Yes</b><BR>
  * 
  * <b>Sync/Async:  Synchronous</b><BR>
  */
int32_t MOTORLIBS_Pol2Car(int16_t Angle,uint32_t Amplitude, int32_t *X);

/**
 * @}
 */
#endif /* MOTORLIBS_H_ */





