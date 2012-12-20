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
#include <gtest/gtest.h>
#include <cucumber-cpp/defs.hpp>
// #include "indigo/gateway/read_raw_data_interactor.h"

using cucumber::ScenarioScope;

//GIVEN("^I have a valid batch of Bruker raw data"){
  //not necessary to call this setup now, since the bruker library will look in the same location as the recalc file
	//ib_test::BrukerTestUtils::setupReactivaDataset(initial_path().generic_string() + "/../../tests/test/fixtures/Reactiva/");
//}

//GIVEN("^I have an invalid batch of Bruker raw data"){
	//ASSERT_FALSE(boost::filesystem::exists(initial_path().generic_string() + "/../../tests/test/fixtures/Reactiva/bad.rcl"));
//}

//WHEN("^I read the data") {
//    ib_reader::ReadRawDataInteractor* interactor = new ib_reader::ReadRawDataInteractor(new ib_gateway::BrukerSequenceFileGateway(initial_path().generic_string() + "/../../tests/test/fixtures/Reactiva//Reactiva.rcl"));
//	USING_CONTEXT(BrukerCtxt, context);
//	
//	try {
//		std::vector<ib_model::Sample> samples = interactor->read();
//	    context->samples.insert(context->samples.end(), samples.begin(), samples.end() );
//	}
//	catch(std::exception e){
//		context->errors = e.what();
//
//	}
//}

//THEN("^I should have valid processed output file of the raw data"){
  //ScenarioScope<BrukerCtxt> context;
  //ASSERT_TRUE(context->samples.size() > 0);	
  //also not necessary, since the setup is no longer needed.
	//ib_test::BrukerTestUtils::teardownReactivaDataset();
//}

//THEN("^I should have the appropriate invalid error messages returned"){
  //ScenarioScope<BrukerCtxt> context;
	//ASSERT_FALSE(context->errors.empty());

//};
