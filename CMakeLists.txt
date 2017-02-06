cmake_minimum_required(VERSION 2.8)
project(ximea-test)

add_definitions(-std=c++11)

set(SOURCE src/ximea-test.cpp)

add_executable(ximea-test ${SOURCE})
target_link_libraries(ximea-test m3api)

add_custom_target(format clang-format -i ${SOURCE}
    WORKING_DIRECTORY ${CMAKE_SOURCE_DIR})

install(TARGETS ximea-test RUNTIME DESTINATION bin)

