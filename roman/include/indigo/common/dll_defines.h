/***********************************************************************
* Copyright (c) 2013 Indigo BioSystems
* 7820 Innovation Boulevard, Suite 250, Indianapolis, Indiana 46278
* All rights reserved.
*
* This software is the confidential and proprietary information of
* Indigo BioSystems. ("Confidential Information"). You shall not
* disclose such Confidential Information and shall use it only in
* accordance with the terms of the license agreement you entered into
* with Indigo BioSystems.
***********************************************************************/
// Contents of DLLDefines.h
#ifndef _roman_DLL_DEFINES_H_
#define _roman_DLL_DEFINES_H_

/* Cmake will define MyLibrary_EXPORTS on Windows when it
configures to build a shared library. If you are going to use
another build system on windows or create the visual studio
projects by hand you need to define MyLibrary_EXPORTS when
building a DLL on windows.
*/
// We are using the Visual Studio Compiler and building Shared libraries

#pragma warning( disable: 4251 )

#if defined (_WIN32) 
  #if defined(roman_EXPORTS)
    #define  roman_EXPORT __declspec(dllexport)
  #else
    #define  roman_EXPORT __declspec(dllimport)
  #endif /*roman_EXPORTS */
#else /* defined (_WIN32) */
 #define roman_EXPORT
#endif

#endif /* _roman_DLL_DEFINES_H_ */