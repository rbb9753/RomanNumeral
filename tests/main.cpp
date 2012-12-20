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
/*
 * This file includes the magic necessary in order to get your unit tests
 * that you create with UnitTest++ to automatically run. There should
 * never be a reason to modify this file. For an example unit test,
 * see "sanity_check.cpp". For a reference on creating tests, see "test.h".
 *
 */
#include "test.h"
#include <string>

int main(int argc, char* argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
 // std::string fullString = initial_path().generic_string();
  std::cout << "=======================================================================================" << std::endl;
  std::cout << "Please run the tests from the directory where the compute-unitests executable lives and copy the fixtures folder" << std::endl;
  std::cout << "=======================================================================================" << std::endl;
  return RUN_ALL_TESTS();
}
