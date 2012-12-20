include_directories( ${roman_INCLUDE_DIR} ${Test_Utils_INCLUDE_DIR} ${DEPENDENCIES_WIN_DIR} ${GTEST_INCLUDE_DIRS} ${CUKE_INCLUDE_DIRS} include )

link_directories(${Boost_LIBRARY_DIRS})

if(GTEST_FOUND)
  include_directories(${GTEST_INCLUDE_DIR})
  add_executable(features read_raw_data_steps.cpp)
  target_link_libraries(features roman ${GTEST_LIBRARIES} ${CUKE_LIBRARIES})
endif()
