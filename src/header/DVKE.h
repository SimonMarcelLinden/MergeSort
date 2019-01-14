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


#ifndef MERGESORT_SORTIERUNG_DVKE_H
#define MERGESORT_SORTIERUNG_DVKE_H

#include "GEOKO.h"

class DVKE {
private:
    GEOKO *data;
    DVKE *next;
    DVKE *prev;
    double distance;
public:
    DVKE();

    ~DVKE();

    DVKE *getNext();

    void setNext(DVKE *next);

    DVKE *getPrev();

    void setPrev(DVKE *prev);

    double getDistance();

    void setDistance(double distance);

    GEOKO *getData();

    void setData(GEOKO *data);
};

#endif //MERGESORT_DVKE_H
