//
// Created by Jakob on 05.01.2019.
//

#ifndef SELECTIONSORT_DVK_H
#define SELECTIONSORT_DVK_H

#include "DVKE.h"
#include "GEOKO.h"

class DVK : DVKE {
    long Anz;
    long Max;
public:
    DVK(int Anzahl);
    ~DVK();
    bool anhaenge(GEOKO *);
    void heapSort();
    void heapDown(long, long);
    void erzeugeHeap(long Anzahl);
    void vertausche(long First, long Second);
    void mergeSort();
};
#endif //SELECTIONSORT_DVK_H
