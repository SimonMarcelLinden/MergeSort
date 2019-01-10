cmake_minimum_required(VERSION 3.12)
project(MergeSort)

set(CMAKE_CXX_STANDARD 14)

add_executable(MergeSort
        ../MergeSort/src/main.cpp
        ../MergeSort/src/header/main.h
        ../MergeSort/src/classes/MyClasses.cpp
        ../MergeSort/src/header/MyClasses.h
        ../MergeSort/src/classes/SortsTest.cpp
        ../MergeSort/src/header/SortsTest.h
        ../MergeSort/src/classes/DVKE.cpp
        ../MergeSort/src/header/DVKE.h
        ../MergeSort/src/classes/GEOKO.cpp
        ../MergeSort/src/header/GEOKO.h
        )