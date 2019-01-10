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

GEOKO::GEOKO(int latDeg, int latMin, double latSec, int longDeg, int longMin, double longSec) {
    this->BrGr = latDeg;
    this->BrMin = latMin;
    this->BrSec = latSec;
    this->LaGr = longDeg;
    this->LaMin = longMin;
    this->LaSec = longSec;
};

// Getter/Setter
int GEOKO::getBrGr() {
    return this->BrGr;
};

int GEOKO::getLaGr() {
    return this->LaGr;
};

int GEOKO::getBrMin() {
    return this->BrMin;
};

int GEOKO::getLaMin() {
    return this->LaMin;
};

double GEOKO::getBrSec() {
    return this->BrSec;
};

double GEOKO::getLaSec() {
    return this->LaSec;
};

void GEOKO::setBrGr(int BrGr) {
    this->BrGr = BrGr;
};

void GEOKO::setLaGr(int LaGr) {
 this->LaGr = LaGr;
};

void GEOKO::setBrMin(int BrMin) {
    this->BrMin = BrMin;
};

void GEOKO::setLaMin(int LaMin) {
    this->LaMin = LaMin;
};

void GEOKO::setBrSec(double BrSec) {
    this->BrSec = BrSec;
};

void GEOKO::setLaSec(double LaSec) {
    this->LaSec = LaSec;
};

//TODO: funktion l�schen
void GEOKO::UmrechnungZuGeo(double secLong, double *sec, int *min, int *gr) {
    double temp = secLong / 3600.0;
    *gr = (int) temp;
    temp = temp - *gr;
    temp = temp * 60;
    *min = (int) temp;
    temp = temp - *min;
    temp = temp * 60;
    *sec = temp;
}


void GEOKO::print() {
    printf("Laengengrad: (%d|%d|%lf), Breitengrad: (%d|%d|%lf) \n", this->LaGr, this->LaMin, this->LaSec, this->BrGr,
           this->BrMin, this->BrSec);
}