/**
 * @editor     CLion
 * @since      1.0.0
 * @package    SelectionSort
 * @subpackage ./src/classes
 * @author Jakob Hoefker <jakob.hoefker@smail.th-koeln.de>
 * @author Simon Marcel Linden <simon_marcel.linden@smail.th-koeln.de>
 * @date 01.01.20198
 *
 * Algorithmen und Datenstrukturen
 * Praktikum - 3
 * @team Team 25
 */

#include "../header/main.h"
//#include "../header/DVKE.h"

#ifndef NULL
#define NULL nullptr
#endif

DVKE::DVKE() {}

// *V: Pointer to the predecessor element
// *N: Pointer to the successor element
DVKE::DVKE(DVKE *N, DVKE *P) {
    this->next = N;
    this->previous = P;
}

DVKE::~DVKE() {}

void *DVKE::Data() {};

DVKE *DVKE::getNext() const {
    return next;
};

void DVKE::setNext(DVKE *N) {
    this->next = N;
};

DVKE *DVKE::getPrevious() const {
    return previous;
};

void DVKE::setPrevious(DVKE *V) {
    this->previous = V;
};
