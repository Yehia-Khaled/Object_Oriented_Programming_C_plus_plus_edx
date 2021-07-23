cmake_minimum_required(VERSION 3.19)
project(Object_Oriented_Programming_C___edx)

set(CMAKE_CXX_STANDARD 14 "${CMAKE_CXX_STANDARD} -std=c++11")
set(Source_Files main1.cpp Test.cpp  hello.cpp)

include_directories(.)
#include_directories("Topic 1 Practice Problems for Review of Basic Concepts, Incomplete section")

add_executable(helloclion ${Source_Files})
#add_executable(Object_Oriented_Programming_C___edx
#        "Topic 1 Practice Problems for Review of Basic Concepts, Incomplete section/Practice Proplems part1.cpp")
