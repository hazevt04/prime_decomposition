cmake_minimum_required( VERSION 2.8.0 )

project( prime_decomposition )

include_directories( "include" )

add_definitions( -std=c++11 )

set(EXEC_NAME "${CMAKE_PROJECT_NAME}")

set(SRCS
   "src/utils.cpp"
   "src/prime_decomposition.cpp"
   "src/main.cpp"
   )

add_executable( "${EXEC_NAME}" "${SRCS}" )
target_link_libraries( "${EXEC_NAME}" m )


