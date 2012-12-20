cmake_minimum_required(VERSION 2.6.2)
project(pairing)
set(APPLICATION_NAME "Pairing")
set(APPLICATION_CODENAME "${PROJECT_NAME}")
set(APPLICATION_COPYRIGHT_YEARS "2013")
set(APPLICATION_VERSION_MAJOR 1)
set(APPLICATION_VERSION_MINOR 0)
set(APPLICATION_VERSION_PATCH 0)
set(APPLICATION_VERSION_TYPE SNAPSHOT)
set(APPLICATION_VERSION_STRING "${APPLICATION_VERSION_MAJOR}.${APPLICATION_VERSION_MINOR}.${APPLICATION_VERSION_PATCH}")
set(APPLICATION_VENDOR_ID "com.indigobio")
set(APPLICATION_VENDOR_NAME "Indigo BioSystems Inc.")
set(APPLICATION_VENDOR_URL "indigobio.com")
set(APPLICATION_ID "${APPLICATION_VENDOR_ID}.${PROJECT_NAME}")

# ---------- Setup output Directories -------------------------
SET (CMAKE_LIBRARY_OUTPUT_DIRECTORY
   ${PROJECT_BINARY_DIR}/Bin
   CACHE PATH
   "Single Directory for all Libraries"
   )

# --------- Setup the Executable output Directory -------------
SET (CMAKE_RUNTIME_OUTPUT_DIRECTORY
   ${PROJECT_BINARY_DIR}/Bin
   CACHE PATH
   "Single Directory for all Executables."
   )

# --------- Setup the Executable output Directory -------------
SET (CMAKE_ARCHIVE_OUTPUT_DIRECTORY
   ${PROJECT_BINARY_DIR}/Bin
   CACHE PATH
   "Single Directory for all static libraries."
   )


set(Boost_USE_STATIC_LIBS        ON)
set(Boost_USE_MULTITHREADED      ON)
set(Boost_USE_STATIC_RUNTIME    OFF)
#set(BOOST_ROOT "dependencies/WIN/boost")
set(GTEST_ROOT "dependencies/WIN/gtest")
set(GMock_DIR "dependencies/WIN/gmock")

find_package(GTest REQUIRED)
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/Modules/")
find_package(GMock REQUIRED)

set(CUKE_INCLUDE_DIRS "../dependencies/WIN/cucumber/include")
set(CUKE_LIBRARIES    debug "../../dependencies/WIN/cucumber/lib/cucumber-cppd" optimized "../../dependencies/WIN/cucumber/lib/cucumber-cpp")

SET(roman_INCLUDE_DIR "../roman/include")
set(DEPENDENCIES_WIN_DIR "../dependencies/WIN")

add_subdirectory(roman)
add_subdirectory(tests)
#add_subdirectory(roman_features)
