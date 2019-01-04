//
// Created by Marcel Linden on 04.01.2019.
//

#include "../header/MyClasses.h"

//was auch immer Sie brauchen:
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <iostream>
#include "math.h"

#include MyClasses.h

//class DVKE
DVKE::DVKE(...);

...???

//class GEOKO
GEOKO::GEOKO(...);

... ??? ...

bool GEOKO::operator
???(GEOKO &);

//class DVK
DVK::DVK(int Anzahl) : DVKE

?????

bool DVK::anhaenge(GEOKO *) { ... }

//fuer Heapsort!
void DVK::versinke(int anz, int i) {
    while (i <= anz / 2) {
        int LN = i * 2;
        if (LN < anz) if (feld[LN] > feld[LN - 1]) LN++;
        if (feld[LN - 1] > feld[i - 1]) {
            vertausche(i - 1, LN - 1);
            i = LN;
        } else i = anz;
    }
}

void DVK::erzeugeHeap(int *feld, int anz) {
    int n = (anz / 2);
    for (int i = n; i >= 1; i--) versinke(feld, anz, i);
}

void DVK::vertausche(int *feld, int first, int second) {
    int tmp = feld[first];
    feld[first] = feld[second];
    feld[second] = tmp;
}

void DVK::heapSort() {
    erzeugeHeap();
    for (int i = Anz; i > 1; i--) {
        vertausche(0, i - 1);
        versinke(i - 1, 1);
    }

}


void DVK::vertausche(long First, long Second) {

    ... ??? ...

}//void vertausche(?)

//nur eins davon
void DVK::selectionSort() { ... }

void DVK::insertionSort() { ... }

void DVK::mergeSort() { ... }

void DVK::quickSort() { ... }

void DVK::bubbleSort() { ... }
