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

#ifndef SELECTIONSORT_DVKE_H
#define SELECTIONSORT_DVKE_H


class DVKE {
public:
    DVKE();

    DVKE(DVKE *N, DVKE *P);
    ~DVKE();

private:
    // *V: Pointer to the predecessor element
    // *N: Pointer to the successor element
    DVKE *next;
    DVKE *previous;

protected:
    void *Data();

public:
    DVKE *getNext() const;

    void setNext(DVKE *N);

    DVKE *getPrevious() const;

    void setPrevious(DVKE *V);
};


#endif //SELECTIONSORT_DVKE_H
