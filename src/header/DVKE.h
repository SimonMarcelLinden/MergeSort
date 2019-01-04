//
// Created by Marcel Linden on 04.01.2019.
//

#ifndef SELECTIONSORT_DVKE_H
#define SELECTIONSORT_DVKE_H


class DVKE {
public:
    DVKE();

    // *V: Pointer to the predecessor element
    // *N: Pointer to the successor element
    DVKE(DVKE *N, DVKE *V);

    ~DVKE();

};


#endif //SELECTIONSORT_DVKE_H
