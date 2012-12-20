include_directories( ${roman_INCLUDE_DIR} ${DEPENDENCIES_WIN_DIR} )

set(LIB_SOURCES
include/indigo/common/dll_defines.h
include/indigo/common/roman.cpp
include/indigo/common/roman.h)

SOURCE_GROUP("Source\\common" REGULAR_EXPRESSION include/indigo/common/*)

add_library(roman STATIC ${LIB_SOURCES})
target_link_libraries(roman)

if (MSVC)
  add_definitions(/D _CRT_SECURE_NO_DEPRECATE)
  SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /MP")
  target_link_libraries(roman)
endif()
