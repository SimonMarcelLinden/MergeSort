cmake_minimum_required(VERSION 3.12)
project(MergeSort)

set(CMAKE_CXX_STANDARD 14)

add_executable(MergeSort
        ../MergeSort/src/main.cpp
        ../MergeSort/src/classes/DVK.cpp
        ../MergeSort/src/classes/DVKE.cpp
        ../MergeSort/src/classes/GEOKO.cpp
        ../MergeSort/src/classes/HeapSort.cpp
        ../MergeSort/src/classes/MergeSort.cpp


        ../MergeSort/src/header/DVK.h
        ../MergeSort/src/header/DVKE.h
        ../MergeSort/src/header/GEOKO.h
        ../MergeSort/src/header/HeapSort.h
        ../MergeSort/src/header/MergeSort.h
        )