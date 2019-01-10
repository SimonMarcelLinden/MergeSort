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
#include "../header/DVK.h"

DVK::DVK() : DVKE() {};

bool DVK::appending(GEOKO *) {
    return true;
}

void DVK::heapSort() {

}

// GETTER & SETTER
int DVK::getMaxAmount() {
    return this->maxAmount;
}

void DVK::setMaxAmount(int maxAmount) {
    this->maxAmount = maxAmount;
}

int DVK::getCurrentAmount() {
    return this->currentAmount;
}

void DVK::setCurrentAmount(int currentAmount) {
    this->currentAmount = currentAmount;
}