 
include_directories(${GTEST_INCLUDE_DIRS} ${GMock_INCLUDE_DIR} ${roman_INCLUDE_DIR} )

link_directories(${Boost_LIBRARY_DIRS})

set(TEST_SOURCE_FILES
)

add_library(test_utils ${TEST_SOURCE_FILES})
target_link_libraries (test_utils roman${GTEST_BOTH_LIBRARIES} ${GMock_LIBRARY})
