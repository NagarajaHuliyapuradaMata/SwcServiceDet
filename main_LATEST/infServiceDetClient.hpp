#pragma once
/******************************************************************************/
/* File   : infServiceDetClient.hpp                                                  */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CompilerCfg_ServiceDet.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#define ServiceDet_ReportError                                     gptrServiceDet->ReportError

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class infServiceDetClient{
   public:
/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
      virtual FUNC(Std_TypeReturn, DET_CODE) ReportError(
            uint16 IdModule
         ,  uint8  IdInstance
         ,  uint8  IdApi
         ,  uint8  IdError
      ) = 0;
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
extern CONSTP2VAR(infServiceDetClient, DET_VAR, DET_CONST) gptrServiceDet;

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

