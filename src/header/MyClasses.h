//
// Created by Marcel Linden on 04.01.2019.
//

#ifndef SELECTIONSORT_MYCLASSES_H
#define SELECTIONSORT_MYCLASSES_H


class DVKE {
    DVKE *N;
    DVKE *V;
    void *Data;
public:
    DVKE(...);

    ...???

}; //...class DVKE

class GEOKO
int BrGr;

int BrMin;
double BrSec;
int LaGr;
int LaMin;
double LaSec;
public:
GEOKO(...);

... ??? ...

bool operator
???(GEOKO &);


}; //...class GEOKO


class DVK : private DVKE {
    long Anz;
    long Max;
    //...???
    Index;

public:
    DVK(int Anzahl);

    bool anhaenge(GEOKO *);

    void heapSort();

    void heapDown(long, long);

    erzeugeHeap(long Anzahl);

    void vertausche(long First, long Second);

    void // bubbleSort() insertionSort() mergeSort() quickSort() selectionSort()       ;

    //... ??? ...


};


#endif //SELECTIONSORT_MYCLASSES_H
