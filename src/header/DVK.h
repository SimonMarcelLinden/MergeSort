/**
 * @editor     CLion
 * @since      1.0.0
 * @package    SelectionSort
 * @subpackage ./src/header
 * @author Jakob Hoefker <jakob.hoefker@smail.th-koeln.de>
 * @author Simon Marcel Linden <simon_marcel.linden@smail.th-koeln.de>
 * @date 01.01.2019
 *
 * Algorithmen und Datenstrukturen
 * Praktikum - 3
 * @team Team 25
 */


#ifndef MERGESORT_DVK_H
#define MERGESORT_DVK_H


#include "DVKE.h"
#include "GEOKO.h"
#include <iostream>
#include <math.h>


class DVK : public DVKE {
private:
    int max;
    int amount;
    DVKE *head = NULL;
    DVKE *tail = NULL;
    DVKE *neu;
    DVKE *allElements;
    GEOKO *middlepoint = new GEOKO();
public:
    DVK(int max);

    ~DVK();

    void addElement(GEOKO *data);

    void printAllElements();

    void printForward();

    void printReverse();

    void calculateMiddlepoint();

    GEOKO *getMiddlepoint();

    void calculateDistanceMiddlepoint();

    DVKE *getAlleElemente();

    int getMax();
};

#endif //MERGESORT_DVK_H
