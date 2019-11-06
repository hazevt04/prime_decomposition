cmake_minimum_required( VERSION 2.8.0 )

project( foo )

include_directories( "${CMAKE_SOURCE_DIR}/include" )

add_definitions( -std=c++11 )

set(EXEC_NAME "foo")

set(SRCS
   "src/utils.cpp"
   "src/main.cpp"
   )

option(DO_UNIT_TEST "Unit test option" OFF)

if(DO_UNIT_TEST)
   add_definitions(-DDO_UNIT_TEST)
endif()

add_executable( "${EXEC_NAME}" "${SRCS}" )
target_link_libraries( "${EXEC_NAME}" m )


