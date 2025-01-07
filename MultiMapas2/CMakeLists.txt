cmake_minimum_required(VERSION 3.27)
project(MultiMapas2)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(MultiMapas2
        App.cpp
        ExtendedTest.cpp
        ExtendedTest.h
        MultiMap.cpp
        MultiMap.h
        MultiMapIterator.cpp
        MultiMapIterator.h
        ShortTest.cpp
        ShortTest.h)
