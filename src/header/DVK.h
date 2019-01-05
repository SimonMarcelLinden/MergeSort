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

#ifndef SELECTIONSORT_DVK_H
#define SELECTIONSORT_DVK_H

//#include "DVKE.h"

class DVK : private DVKE {
private:
    int maxAmount;      //Anzahl der maximalen Listenelemente
    int currentAmount;  //Anzahl der tatsächlichen Listenelemente



public:
    DVK();

    bool appending(GEOKO *); // Funktion zum ANgängen neuer Elmente.
    void heapSort();

    int getCurrentAmount();

    void setCurrentAmount(int currentAmount);

    int getMaxAmount();

    void setMaxAmount(int maxAmount);
};

#endif //SELECTIONSORT_DVK_H