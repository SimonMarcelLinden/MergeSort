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

#include "../header/DVKE.h"

DVKE::DVKE() {}

DVKE::~DVKE() {}

DVKE *DVKE::getNext() {
    return this->next;
}

void DVKE::setNext(DVKE *next) {
    this->next = next;
}

DVKE *DVKE::getPrev() {
    return this->prev;
}

void DVKE::setPrev(DVKE *prev) {
    this->prev = prev;
}

double DVKE::getDistance() {
    return this->distance;
}

void DVKE::setDistance(double distance) {
    this->distance = distance;
}

GEOKO *DVKE::getData() {
    return this->data;
}

void DVKE::setData(GEOKO *data) {
    this->data = data;
}