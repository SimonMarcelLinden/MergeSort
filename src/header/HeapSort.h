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

#ifndef MERGESORT_HEAPSORT_H
#define MERGESORT_HEAPSORT_H

#include "DVKE.h"
#include <iostream>

using namespace std;

using namespace std;

class HeapSort {
public:
    void heapify(DVKE *arr, int n, int i);

    void heapSort(DVKE *arr, int n);
};

#endif //MERGESORT_HEAPSORT_H
