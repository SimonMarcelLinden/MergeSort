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

#ifndef MERGESORT_MERGESORT_H
#define MERGESORT_MERGESORT_H

#include "DVKE.h"

class MergeSort {
public:
    void merge(DVKE *arr, int l, int m, int r);

    void mergeSort(DVKE *arr, int l, int r);
};

#endif //MERGESORT_SORTIERUNG_MERGESORT_H
