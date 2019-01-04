cmake_minimum_required(VERSION 3.12)
project(SelectionSort)

set(CMAKE_CXX_STANDARD 14)

add_executable(SelectionSort
        ../SelectionSort/src/main.cpp
        ../SelectionSort/src/header/main.h
        ../SelectionSort/src/classes/MyClasses.cpp
        ../SelectionSort/src/header/MyClasses.h
        ../SelectionSort/src/classes/SortsTest.cpp
        ../SelectionSort/src/header/SortsTest.h
        )