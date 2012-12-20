 
include_directories( ${Test_Utils_INCLUDE_DIR} ${GTEST_INCLUDE_DIRS} ${GMock_INCLUDE_DIR} ${roman_INCLUDE_DIR} ${DEPENDENCIES_WIN_DIR})


set(TEST_SOURCE_FILES
roman_test.cpp
main.cpp)

if(MSVC)
  SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /MP")
  set(TEST_SOURCE_FILES ${TEST_SOURCE_FILES} )
endif()

add_executable(tests ${TEST_SOURCE_FILES})
target_link_libraries (tests roman ${GTEST_BOTH_LIBRARIES} ${GMock_Lib})
