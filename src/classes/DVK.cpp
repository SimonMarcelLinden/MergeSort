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

#include "../header/DVK.h"

using namespace std;


DVK::DVK(int max) {
    this->max = max;
    allElements = new DVKE[max];
    this->amount = 1;
}

DVK::~DVK() {}

void DVK::printAllElements() {
    printf("Alle Elemente in dem Array der Liste \n");
    for (int i = 0; i < this->max; i++) {
        printf("%d. Laengengrad: %lf (%dgr, %d', %lf'')| Breitengrad: (%lf %dgr, %d', %lf''), Abstand zu Mittelpunkt: %lf \n",
               i + 1,
               allElements[i].getData()->getLaengengrad_dez(), allElements[i].getData()->getLaGr(),
               allElements[i].getData()->getLaMin(), allElements[i].getData()->getLaSec(),
               allElements[i].getData()->getBreitengrad_dez(), allElements[i].getData()->getBrGr(),
               allElements[i].getData()->getBrMin(), allElements[i].getData()->getBrSec(),
               allElements[i].getDistance());
    }

}

void DVK::addElement(GEOKO *data) {
    if (head == NULL) {
        neu = new DVKE;
        neu->setData(data);
        neu->setPrev(NULL);
        head = neu;
        tail = neu;
        allElements[0] = *neu;
    } else {
        neu = new DVKE;
        neu->setData(data);
        neu->setPrev(tail);
        tail->setNext(neu);
        tail = neu;
        tail->setNext(NULL);
        allElements[amount] = *neu;
        amount++;
    }
}

void DVK::printForward() {
    if (this->head == NULL && this->tail == NULL) {
        printf("Liste ist leer");
    } else {
        int i = 1;
        DVKE *temp = this->head;
        printf("Liste - Forward \n");
        while (temp != NULL) {
            printf("%d. Laengengrad: %lf (%dgr, %d', %lf'')| Breitengrad: (%lf %dgr, %d', %lf'') \n", i,
                   temp->getData()->getLaengengrad_dez(), temp->getData()->getLaGr(), temp->getData()->getLaMin(),
                   temp->getData()->getLaSec(),
                   temp->getData()->getBreitengrad_dez(), temp->getData()->getBrGr(), temp->getData()->getBrMin(),
                   temp->getData()->getBrSec());
            temp = temp->getNext();
            i++;
        }
    }
}

void DVK::printReverse() {
    if (this->head == NULL && this->tail == NULL) {
        printf("Liste ist leer");
    } else {
        int i = 1;
        DVKE *temp = this->tail;
        printf("Liste - Reverse \n");
        while (temp != NULL) {
            printf("%d. Laengengrad: %lf (%dgr, %d', %lf'')| Breitengrad: (%lf %dgr, %d', %lf'') \n", i,
                   temp->getData()->getLaengengrad_dez(), temp->getData()->getLaGr(), temp->getData()->getLaMin(),
                   temp->getData()->getLaSec(),
                   temp->getData()->getBreitengrad_dez(), temp->getData()->getBrGr(), temp->getData()->getBrMin(),
                   temp->getData()->getBrSec());
            temp = temp->getPrev();
            i++;
        }
    }
}

void DVK::calculateMiddlepoint() {
    // TODO: richtige Berechnung
    double temp_laengengrad_dez = 0.0;
    double temp_breitengrad_dez = 0.0;
    int temp_BrGr = 0;
    int temp_BrMin = 0;
    double temp_BrSec = 0.0;
    int temp_LaGr = 0;
    int temp_LaMin = 0;
    double temp_LaSec = 0.0;

    for (int i = 0; i < this->max; i++) {
        temp_laengengrad_dez += allElements[i].getData()->getLaengengrad_dez();
        temp_breitengrad_dez += allElements[i].getData()->getBreitengrad_dez();
        temp_BrGr += allElements[i].getData()->getBrGr();
        temp_BrMin += allElements[i].getData()->getBrMin();
        temp_BrSec += allElements[i].getData()->getBrSec();
        temp_LaGr += allElements[i].getData()->getLaGr();
        temp_LaMin += allElements[i].getData()->getLaMin();
        temp_LaSec += allElements[i].getData()->getLaSec();
    }

    middlepoint->setLaengengrad_dez(temp_laengengrad_dez / this->max);
    middlepoint->setBreitengrad_dez(temp_breitengrad_dez / this->max);
    middlepoint->setBrGr(temp_BrGr / this->max);
    middlepoint->setBrMin(temp_BrMin / this->max);
    middlepoint->setBrSec(temp_BrSec / this->max);
    middlepoint->setLaGr(temp_LaGr / this->max);
    middlepoint->setLaMin(temp_LaMin / this->max);
    middlepoint->setLaSec(temp_LaSec / this->max);
}

GEOKO *DVK::getMiddlepoint() {
    return this->middlepoint;
}

void DVK::calculateDistanceMiddlepoint() {
    // TODO: richtige Abstandsberechnung
    double distance;
    for (int i = 0; i < this->max; i++) {
        distance = (double) rand() / 100;
        allElements[i].setDistance(distance);

    }
}


DVKE *DVK::getAlleElemente() {
    return this->allElements;
}

int DVK::getMax() {
    return this->max;
}