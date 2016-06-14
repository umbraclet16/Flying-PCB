package CodeGenerator;

import com.ifx.davex.appjetinteract.App2JetInterface;

public class systm001_hTemplate
{
  protected static String nl;
  public static synchronized systm001_hTemplate create(String lineSeparator)
  {
    nl = lineSeparator;
    systm001_hTemplate result = new systm001_hTemplate();
    nl = null;
    return result;
  }

  public final String NL = nl == null ? (System.getProperties().getProperty("line.separator")) : nl;
  protected final String TEXT_1 = "/*CODE_BLOCK_BEGIN[SYSTM001.h]*/" + NL + "/**************************************************************************//**" + NL + " *" + NL + " * Copyright (C) 2014 Infineon Technologies AG. All rights reserved." + NL + " *" + NL + " * Infineon Technologies AG (Infineon) is supplying this software for use with" + NL + " * Infineon's microcontrollers." + NL + " * This file can be freely distributed within development tools that are" + NL + " * supporting such microcontrollers." + NL + " *" + NL + " * THIS SOFTWARE IS PROVIDED \"AS IS\".  NO WARRANTIES, WHETHER EXPRESS, IMPLIED" + NL + " * OR STATUTORY, INCLUDING, BUT NOT LIMITED TO, IMPLIED WARRANTIES OF" + NL + " * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE APPLY TO THIS SOFTWARE." + NL + " * INFINEON SHALL NOT, IN ANY CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL," + NL + " * OR CONSEQUENTIAL DAMAGES, FOR ANY REASON WHATSOEVER." + NL + " *" + NL + "********************************************************************************" + NL + "**                                                                            **" + NL + "**                                                                            **" + NL + "** PLATFORM : Infineon XMC4000/XMC1xxx Series\t\t                          **" + NL + "**                                                                            **" + NL + "** COMPILER : Compiler Independent                                            **" + NL + "**                                                                            **" + NL + "** AUTHOR   : App Developer                                                   **" + NL + "**                                                                            **" + NL + "** MAY BE CHANGED BY USER [yes/Yes]: Yes                                      **" + NL + "**                                                                            **" + NL + "** MODIFICATION DATE : Jan 29, 2014                                           **" + NL + "**                                                                            **" + NL + "*******************************************************************************/" + NL + "" + NL + "/*******************************************************************************" + NL + "**                       Author(s) Identity                                   **" + NL + "********************************************************************************" + NL + "**                                                                            **" + NL + "** Initials     Name                                                          **" + NL + "** ---------------------------------------------------------------------------**" + NL + "** Yogesh     App Developer                                                   **" + NL + "*******************************************************************************/" + NL + "/* Revision History" + NL + " *****************************************************************************" + NL + " *Date           Version     Remarks" + NL + " *13/1/2013       1.0.10      XMC1xxx device support added" + NL + " *03/10/2013      1.0.14      XMC1201,XMC1202,XMC1301 device support added." + NL + " *29/01/2014      1.0.16      DBG002 App changes are taken care" + NL + " *" + NL + "*/" + NL + "/**" + NL + " * @file SYSTM001.h" + NL + " *" + NL + " * @App Version SYSTM001 <";
  protected final String TEXT_2 = ">" + NL + " * " + NL + " * @brief  Simple System Timer App implementation header file." + NL + " *" + NL + " */" + NL + "" + NL + " #ifndef SYSTM001_H_" + NL + " #define SYSTM001_H_" + NL + "" + NL + " /* Support for C++ codebase */" + NL + " #ifdef __cplusplus" + NL + " extern \"C\" {" + NL + " #endif" + NL + " /*******************************************************************************" + NL + "**                      Include Files                                         **" + NL + "*******************************************************************************/" + NL + "/* Inclusion of Platform specific file */" + NL + "#include <DAVE3.h>" + NL + "" + NL + "/*******************************************************************************" + NL + "**                      Global Macro Definitions                              **" + NL + "*******************************************************************************/" + NL + "" + NL + "/**" + NL + " * @ingroup SYSTM001_publicparam" + NL + " * @{" + NL + " */" + NL + "" + NL + "  /* System Core clock frequency in MHz */" + NL + "" + NL + "  ";
  protected final String TEXT_3 = NL + "#define SYSTM001_SYS_CORE_CLOCK  ";
  protected final String TEXT_4 = "U ";
  protected final String TEXT_5 = NL + "#define SYSTM001_SYS_CORE_CLOCK  ";
  protected final String TEXT_6 = " ";
  protected final String TEXT_7 = NL + NL + NL + "  /* Time between between two systick interrupt in Msec */";
  protected final String TEXT_8 = NL + " #define SYSTM001_SYSTICK_INTERVAL ";
  protected final String TEXT_9 = "U";
  protected final String TEXT_10 = NL + " #define SYSTM001_SYSTICK_INTERVAL 10";
  protected final String TEXT_11 = NL + "  /* Maximum No of timer */" + NL + "#define SYSTM001_CFG_MAX_TMR  ";
  protected final String TEXT_12 = "U " + NL + "" + NL + "/* Macro function to convert systick count to millisecond */" + NL + "#define CONVERT_SYSTICK_COUNT_TO_MSEC(val) (val * SYSTM001_SYSTICK_INTERVAL)" + NL + "/* Macro function to convert millisecond to systick count */" + NL + "#define CONVERT_MSEC_TO_SYSICK_COUNT(val)   (SYSTM001_SYS_CORE_CLOCK * val * 1000U)" + NL + "" + NL + "/**" + NL + " * @}" + NL + " */" + NL + "" + NL + "/*******************************************************************************" + NL + "**                      Global Type Definitions                               **" + NL + "*******************************************************************************/" + NL + "/**" + NL + " * @ingroup SYSTM001_publicparam" + NL + " * @{" + NL + " */" + NL + "" + NL + "/*" + NL + " * This enumeration define possible timer state." + NL + " */" + NL + "typedef enum SYSTM001_TimerStateType{" + NL + "/**" + NL + " * The timer is in running state" + NL + " */" + NL + "  SYSTM001_STATE_RUNNING," + NL + "/**" + NL + "  * The timer is stopped" + NL + " */" + NL + "  SYSTM001_STATE_STOPPED" + NL + "}SYSTM001_TimerStateType;" + NL + "" + NL + "/**" + NL + " * Enum values which describes timer types" + NL + " */" + NL + "typedef enum SYSTM001_TimerType" + NL + "{" + NL + "  /**" + NL + "    * Timer Type is one shot." + NL + "    */" + NL + "  SYSTM001_ONE_SHOT," + NL + "  /**" + NL + "   * Timer Type is periodic." + NL + "   */" + NL + "  SYSTM001_PERIODIC" + NL + "}SYSTM001_TimerType;" + NL + "" + NL + "" + NL + "" + NL + "/**" + NL + " * Enum values which describes return status of functions" + NL + " */" + NL + "typedef enum SYSTM001_ErrorCodesType" + NL + "{" + NL + "  /**" + NL + "   * Invalid Handle." + NL + "   */" + NL + "  /**" + NL + "   * @cond INTERNAL_DOCS" + NL + "   * @param MODULENAME SYSTM001" + NL + "   * @endcond" + NL + "  */" + NL + "  /**" + NL + "   * @cond INTERNAL_DOCS" + NL + "   * @param\tERRCODESTRING1 SYSTM001_INVALID_HANDLE_ERROR" + NL + "   * @param\tSTRCODESTRING1 Input handle is not valid" + NL + "   * @endcond" + NL + "  */" + NL + "  SYSTM001_INVALID_HANDLE_ERROR = 1," + NL + "  /**" + NL + "   * Timer error occured." + NL + "   */" + NL + "  /**" + NL + "   * @cond INTERNAL_DOCS" + NL + "   * @param\tERRCODESTRING2 SYSTM001_ERROR" + NL + "   * @param\tSTRCODESTRING2 Timer Error" + NL + "   * @endcond" + NL + "  */" + NL + "  SYSTM001_ERROR," + NL + "  /**" + NL + "   * Debuglog function entry." + NL + "   */" + NL + "  /**" + NL + "   * @cond INTERNAL_DOCS" + NL + "   * @param\tERRCODESTRING3 SYSTM001_FUNCTION_ENTRY" + NL + "   * @param\tSTRCODESTRING3 Entered function \\%s" + NL + "   * @endcond" + NL + "   *" + NL + "   */" + NL + "  SYSTM001_FUNCTION_ENTRY," + NL + "  /**" + NL + "   * Debuglog function exit." + NL + "   */" + NL + "  /**" + NL + "   * @cond INTERNAL_DOCS" + NL + "   * @param ERRCODESTRING4 SYSTM001_FUNCTION_EXIT" + NL + "   * @param STRCODESTRING4 Exited function \\%s" + NL + "   * @endcond" + NL + "  */" + NL + "  SYSTM001_FUNCTION_EXIT" + NL + "}SYSTM001_ErrorCodesType;" + NL + "" + NL + "" + NL + "/**" + NL + " * Timer callback function pointer." + NL + " */" + NL + "typedef void (*SYSTM001_TimerCallBackPtr)(void* ParamToCallBack);" + NL + "" + NL + "" + NL + "" + NL + "/**" + NL + " * Global structure which acts as the timer control block ." + NL + " *  " + NL + " */" + NL + "typedef struct SYSTM001_TimerObject" + NL + "{" + NL + "  /* <<<DD_SYSTM001_STRUCT_1>>> */" + NL + "  /** Timer ID  */" + NL + "  uint32_t TimerID;" + NL + "  /** Timer Type (Single Shot or Periodic)*/" + NL + "  SYSTM001_TimerType TimerType;" + NL + "  /** Timer State  */" + NL + "  SYSTM001_TimerStateType TimerState;" + NL + "  /** Timer Counter  */" + NL + "  uint32_t TimerCount;" + NL + "  /** Timer Reload Counter value */" + NL + "  uint32_t TimerReload;" + NL + "  /** Callback function pointer */" + NL + "  SYSTM001_TimerCallBackPtr TimerCallBack;" + NL + "  /** Parameter to callback function */" + NL + "  void* ParamToCallBack;" + NL + "  /** pointer to next timer control block*/" + NL + "  struct SYSTM001_TimerObject*  TimerNext;" + NL + "  /** Pointer to previous timer control block */" + NL + "  struct SYSTM001_TimerObject*  TimerPrev;" + NL + "}SYSTM001_TimerObject;" + NL + "" + NL + "" + NL + "/**" + NL + " * @}" + NL + " */" + NL + "" + NL + "/*******************************************************************************" + NL + "**                      Global Constant Declarations                          **" + NL + "*******************************************************************************/" + NL + "" + NL + "" + NL + "/*******************************************************************************" + NL + "**                      Extern Variables                                      **" + NL + "*******************************************************************************/" + NL + "" + NL + "" + NL + "/*******************************************************************************" + NL + "**                     FUNCTION PROTOTYPES                                    **" + NL + "*******************************************************************************/" + NL + "/**" + NL + " * @ingroup SYSTM001_apidoc" + NL + " * @{" + NL + " */" + NL + "" + NL + "" + NL + "/**" + NL + " * Initializes the systick counter as per the systick interval specified by the " + NL + " * user and start the systick counter. It also initializes global variables." + NL + " *" + NL + " * @return     void" + NL + " *" + NL + " *" + NL + " * <b>Reentrant: NO </b><BR>" + NL + " * <BR><P ALIGN=\"LEFT\"><B>Example:</B>" + NL + " * @code" + NL + " *  #include <DAVE3.h>" + NL + " *  int main(void)" + NL + " *  {" + NL + " *    // Initialize and Systick counter" + NL + " *    DAVE_Init(); // SYSTM001_Init() will be called within DAVE_Init()" + NL + " *    // ... infinite loop ..." + NL + " *    while(1)" + NL + " *    {" + NL + " *    " + NL + " *    }" + NL + " *     " + NL + " *  }" + NL + " * @endcode<BR> </p>" + NL + " */" + NL + "void  SYSTM001_Init( void);" + NL + "" + NL + "" + NL + "/**" + NL + " *  Creates a new software Timer." + NL + " *  " + NL + " *  Note : This App uses SysTick Exception for controlling the timer list. Call back function" + NL + " *  registered through this function will be called in SysTick exception when the timer is expired." + NL + " *  One shot timers are removed from the timer list, if it expires. To use" + NL + " *  this SW timer again it has to be first deleted and then created again. " + NL + " *  Periodic timer will be added again to the timer list with the same periodic" + NL + " *  value after it expires." + NL + " *" + NL + " *" + NL + " * @param[in]  Period Timer period value in milliseconds" + NL + " * @param[in]  TimerType Type of Timer(ONE_SHOT/PERIODIC)" + NL + " * @param[in]  TimerCallBack Call back function of the timer(No Macros are allowed)" + NL + " * @param[in]  pCallBackArgPtr Call back function parameter" + NL + " *" + NL + " * @return     handle_t<BR> " + NL + " *             Timer ID : If timer created successfully.<BR>" + NL + " *             0  : If timer creation failed.<BR>" + NL + " *" + NL + " *" + NL + " * <b>Reentrant: NO </b><BR>" + NL + " *" + NL + " * <BR><P ALIGN=\"LEFT\"><B>Example:</B>" + NL + " * @code" + NL + " *  #include <DAVE3.h>" + NL + " * static volatile bool TimerExpired;" + NL + " * void my_func_a(void* Temp)" + NL + " *  {" + NL + " *    static uint32_t Count = 1;" + NL + " *    if(Count == 10)" + NL + " *    {" + NL + " *      TimerExpired = TRUE;" + NL + " *    }" + NL + " *    Count++;" + NL + " *  }" + NL + " *  int main(void)" + NL + " *  {" + NL + " *    handle_t TimerId;" + NL + " *    // ... Initializes Apps configurations ..." + NL + " *    DAVE_Init();" + NL + " *    TimerId = SYSTM001_CreateTimer(100,SYSTM001_PERIODIC,my_func_a,NULL);" + NL + " *    if(TimerId != 0)" + NL + " *    {" + NL + " *    //Timer is created successfully" + NL + " *    }" + NL + " *    // ... infinite loop ..." + NL + " *    while(1)" + NL + " *    {" + NL + " *    " + NL + " *    }" + NL + " *     " + NL + " *  }" + NL + " * @endcode<BR> </p>" + NL + " */" + NL + "handle_t SYSTM001_CreateTimer" + NL + "(" + NL + "  uint32_t Period," + NL + "  SYSTM001_TimerType TimerType," + NL + "  SYSTM001_TimerCallBackPtr TimerCallBack," + NL + "  void  * pCallBackArgPtr" + NL + ");" + NL + "" + NL + "/**" + NL + " * Starts the software timer ." + NL + " *" + NL + " *" + NL + " * @param[in]  Handle Timer ID obtained from SYSTM001_CreateTimer" + NL + " *" + NL + " * @return     status_t<BR>" + NL + " *             DAVEApp_SUCCESS \t\t\t: If timer is started successufully<BR>" + NL + " *             SYSTM001_INVALID_HANDLE  : If Timer ID  passed is invalid<BR>" + NL + " *" + NL + " * <b>Reentrant: NO </b><BR>" + NL + " *" + NL + " * <BR><P ALIGN=\"LEFT\"><B>Example:</B>" + NL + " * @code" + NL + " *  #include <DAVE3.h>" + NL + " *  static volatile bool TimerExpired; " + NL + " *  void my_func_a(void* Temp)" + NL + " *  {" + NL + " *    static uint32_t Count = 1;" + NL + " *    if(Count == 10)" + NL + " *    {" + NL + " *      TimerExpired = TRUE;" + NL + " *    }" + NL + " *    Count++;" + NL + " *  }" + NL + " *  int main(void)" + NL + " *  {" + NL + " *    handle_t TimerId;" + NL + " *    uint32_t Status = SYSTM001_ERROR;" + NL + " *    // ... Initializes Apps configurations ..." + NL + " *    DAVE_Init();" + NL + " *    TimerId = SYSTM001_CreateTimer(100,SYSTM001_PERIODIC,my_func_a,NULL);" + NL + " *    if(TimerId != 0)" + NL + " *    {" + NL + " *      //Timer is created successfully" + NL + " *   \tStatus = SYSTM001_StartTimer(TimerId);" + NL + " *   \tif(Status == DAVEApp_SUCCESS)" + NL + " *   \t{" + NL + " *   \t         //Timer started" + NL + " *   \t}" + NL + " *\t  }" + NL + " *    // ... infinite loop ..." + NL + " *    while(1)" + NL + " *    {" + NL + " *    " + NL + " *    }" + NL + " *  }" + NL + " * @endcode<BR> </p>" + NL + " */" + NL + "status_t SYSTM001_StartTimer(handle_t  Handle) ;" + NL + "" + NL + "" + NL + "/**" + NL + " * Stops the software timer" + NL + " *" + NL + " * @param[in]  Handle Timer ID obtained from SYSTM001_CreateTimer" + NL + " *" + NL + " * @return     status_t<BR>" + NL + " *             DAVEApp_SUCCESS \t\t\t: if timer is stopped successfully.<BR>" + NL + " *             SYSTM001_INVALID_HANDLE  : If Timer ID  passed is invalid.<BR>" + NL + " *" + NL + " * <b>Reentrant: NO </b><BR>" + NL + " *" + NL + " * <BR><P ALIGN=\"LEFT\"><B>Example:</B>" + NL + " * @code" + NL + " *  #include <DAVE3.h>" + NL + " *  static volatile bool TimerExpired;" + NL + " *  void my_func_a(void* Temp)" + NL + " *  {" + NL + " *   static uint32_t Count = 1;" + NL + " *   if(Count == 10)" + NL + " *   {" + NL + " *     TimerExpired = TRUE;" + NL + " *   }" + NL + " *    Count++;" + NL + " *  }" + NL + " *  int main(void)" + NL + " *  {" + NL + " *    handle_t TimerId;" + NL + " *   uint32_t Status = SYSTM001_ERROR;" + NL + " *   // ... Initializes Apps configurations ..." + NL + " *    DAVE_Init();" + NL + " *    TimerId = SYSTM001_CreateTimer(100,SYSTM001_PERIODIC,my_func_a,NULL);" + NL + " *    if(TimerId != 0)" + NL + " *    {" + NL + " *      //Timer is created successfully" + NL + " *    \tStatus = SYSTM001_StartTimer(TimerId);" + NL + " *      if(Status == DAVEApp_SUCCESS)" + NL + " *    \t{" + NL + " *    \t   // Wait till timer is expired" + NL + " *    \t   while(TimerExpired == FALSE)" + NL + " *         {}" + NL + " *    \t\t//stop the timer" + NL + " *    \t\tStatus = SYSTM001_StopTimer(TimerId);" + NL + " *    \t    if(Status == DAVEApp_SUCCESS)" + NL + " *    \t\t{" + NL + " *    \t      //Timer stopped" + NL + " *    \t\t}" + NL + " *       }" + NL + " *       // start the timer" + NL + " *        SYSTM001_StartTimer(TimerId);" + NL + " *    }" + NL + " *    // ... infinite loop ..." + NL + " *    while(1)" + NL + " *    {" + NL + " *     " + NL + " *    }" + NL + " *      " + NL + " * }" + NL + " * @endcode<BR> </p>" + NL + " */" + NL + "status_t SYSTM001_StopTimer(handle_t Handle) ;" + NL + "" + NL + "/**" + NL + " * Deletes the software timer from the timer list." + NL + " *  " + NL + " *  Note : One shot timers are removed from the timer list, if it expires. To use " + NL + " *  this SW timer again it have to be first deleted and then created again. " + NL + " *  Periodic timer will be added again to the timer list with the same periodic" + NL + " *  value after it expires." + NL + " *" + NL + " *" + NL + " * @param[in]  Handle Timer ID" + NL + " *" + NL + " * @return     status_t<BR>" + NL + " *             DAVEApp_SUCCESS \t\t\t: if timer is deleted successufully.<BR>" + NL + " *             SYSTM001_INVALID_HANDLE  : If Timer ID  passed is invalid.<BR>" + NL + " *" + NL + " * <b>Reentrant: NO </b><BR>" + NL + " *" + NL + " * <BR><P ALIGN=\"LEFT\"><B>Example:</B>" + NL + " * @code" + NL + " *  #include <DAVE3.h>" + NL + " *  static volatile bool TimerExpired;" + NL + " *  void my_func_a(void* Temp)" + NL + " *  {" + NL + " *   static uint32_t Count = 1;" + NL + " *   if(Count == 10)" + NL + " *   {" + NL + " *     TimerExpired = TRUE;" + NL + " *   }" + NL + " *   Count++;" + NL + " *  }" + NL + " *  int main(void)" + NL + " *  {" + NL + " *    handle_t TimerId;" + NL + " *    uint32_t Status = SYSTM001_ERROR;" + NL + " *    // ... Initializes Apps configurations ..." + NL + " *    DAVE_Init();" + NL;
  protected final String TEXT_13 = " *    TimerId = SYSTM001_CreateTimer(100,SYSTM001_PERIODIC,my_func_a,NULL);" + NL + " *    if(TimerId != 0)" + NL + " *    {" + NL + " *      //Timer is created successfully" + NL + " *      Status = SYSTM001_StartTimer(TimerId);" + NL + " *      if(Status == DAVEApp_SUCCESS)" + NL + " *    \t{" + NL + " *        // Wait till timer is expired" + NL + " *        while(TimerExpired == FALSE)" + NL + " *        {}" + NL + " *    \t  //stop the timer" + NL + " *    \t  Status = SYSTM001_StopTimer(TimerId);" + NL + " *        if(Status == DAVEApp_SUCCESS)" + NL + " *    \t  {" + NL + " *    \t    SYSTM001_DeleteTimer(TimerId);" + NL + " *    \t  }" + NL + " *      }" + NL + " *    }    " + NL + " *    // ... infinite loop ..." + NL + " *    while(1)" + NL + " *    {" + NL + " *     " + NL + " *    } " + NL + " * }" + NL + " * @endcode<BR> </p>" + NL + " */" + NL + "status_t SYSTM001_DeleteTimer(handle_t Handle) ;" + NL + "" + NL + "" + NL + "/**" + NL + " * Gives the current system time in millisec since start of counter." + NL + " *" + NL + " *" + NL + " * @return     uint32_t returns current system time in millisec." + NL + " *" + NL + " *" + NL + " * <b>Reentrant: NO </b><BR>" + NL + " *" + NL + " * <BR><P ALIGN=\"LEFT\"><B>Example:</B>" + NL + " * @code" + NL + " *  #include <DAVE3.h>" + NL + " *  static volatile bool TimerExpired; " + NL + " *  void my_func_a(void* Temp)" + NL + " *  {" + NL + " *    static uint32_t Count = 1;" + NL + " * \t  if(Count == 10)" + NL + " *    {" + NL + " *      TimerExpired = TRUE;" + NL + " *    }" + NL + " *    Count++;" + NL + " *  }" + NL + " *  int main(void)" + NL + " *  {" + NL + " * \t  handle_t TimerId;" + NL + " *    uint32_t SystemTime = 0;" + NL + " *    uint32_t Status = SYSTM001_ERROR;" + NL + " *    // ... Initializes Apps configurations ..." + NL + " *    DAVE_Init();" + NL + " *    TimerId = SYSTM001_CreateTimer(100,SYSTM001_PERIODIC,my_func_a,NULL);" + NL + " *    if(TimerId != 0)" + NL + " *    {" + NL + " *      //Timer is created successfully" + NL + " *      Status = SYSTM001_StartTimer(TimerId);" + NL + " *      if(Status == DAVEApp_SUCCESS)" + NL + " *      {" + NL + " *        SystemTime = SYSTM001_GetTime();" + NL + " *      }" + NL + " *    }" + NL + " *     // ... infinite loop ..." + NL + " *    while(1)" + NL + " *    {" + NL + " *    " + NL + " *    }" + NL + " * }" + NL + " * @endcode<BR> </p>" + NL + " */" + NL + "uint32_t  SYSTM001_GetTime(void);" + NL + "" + NL + "" + NL + "/**" + NL + " * Utility function to get the no of system ticks for the" + NL + " * specified period given in millisec." + NL + " *" + NL + " *" + NL + " * @return     uint32_t returns no of system ticks" + NL + " *" + NL + " *" + NL + " * <b>Reentrant: NO </b><BR>" + NL + " *" + NL + " * <BR><P ALIGN=\"LEFT\"><B>Example:</B>" + NL + " * @code" + NL + " *  #include <DAVE3.h>" + NL + " *  int main(void)" + NL + " *  {" + NL + " *    uint32_t SysTickCount = 0;" + NL + " *    DAVE_Init();" + NL + " *    // Get systick timer count value for 100millisec" + NL + " *    SysTickCount = SYSTM001_GetSysTickCount(100);" + NL + " *    return 0;" + NL + " *  }" + NL + " * @endcode<BR> </p>" + NL + " */" + NL + "uint32_t  SYSTM001_GetSysTickCount(uint32_t Period );" + NL + "" + NL + "/**" + NL + " *@}" + NL + " */" + NL + "" + NL + "/* Support for C++ codebase */" + NL + "#ifdef __cplusplus" + NL + "}" + NL + "#endif  " + NL + "" + NL + "#endif /* SYSTM001_H_ */   " + NL + "" + NL + "/*CODE_BLOCK_END*/";

  public String generate(Object argument)
  {
    final StringBuffer stringBuffer = new StringBuffer();
     App2JetInterface app = (App2JetInterface) argument; 
     String AppBaseuri = "app/systm001/0";
    stringBuffer.append(TEXT_1);
    stringBuffer.append( app.getAppVersion(AppBaseuri));
    stringBuffer.append(TEXT_2);
    int XMC1xxx=-1;
    XMC1xxx=app.getSoftwareId().substring(0,1).compareTo("1");
    if(XMC1xxx!=0)
    {
    stringBuffer.append(TEXT_3);
    stringBuffer.append( app.getIntegerValue (AppBaseuri + "/clockapp/clk001_iroActualFreqSystem" ) );
    stringBuffer.append(TEXT_4);
    }
    else {
    stringBuffer.append(TEXT_5);
    stringBuffer.append( app.getDoubleValue (AppBaseuri + "/clockapp/clk002_irMCLK" ) );
    stringBuffer.append(TEXT_6);
    }
    stringBuffer.append(TEXT_7);
    int systick = app.getIntegerValue (AppBaseuri + "/systm001_systickinterval" );
if(systick > 0) {
    stringBuffer.append(TEXT_8);
    stringBuffer.append(systick);
    stringBuffer.append(TEXT_9);
    }else {
    stringBuffer.append(TEXT_10);
    }
    stringBuffer.append(TEXT_11);
    stringBuffer.append( app.getIntegerValue (AppBaseuri + "/systm001_swtimers" ) );
    stringBuffer.append(TEXT_12);
    stringBuffer.append(TEXT_13);
    return stringBuffer.toString();
  }
}
