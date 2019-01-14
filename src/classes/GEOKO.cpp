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

#include "../header/GEOKO.h"
#include <iostream>

void GEOKO::calculateGeoCoordinates(double longitude_dec, double latitude_dec) {
    // TODO: richtige Umrechnung
    this->BrGr = latitude_dec / 3600;
    this->BrMin = latitude_dec / 60 - this->BrGr * 60;
    this->BrSec = latitude_dec - this->BrMin * 60 - this->BrGr * 60 * 60;

    this->LaGr = longitude_dec / 3600;
    this->LaMin = longitude_dec / 60 - this->LaGr * 60;
    this->LaSec = longitude_dec - this->LaMin * 60 * 60;
}

GEOKO::GEOKO() {}

GEOKO::~GEOKO() {}

GEOKO::GEOKO(double longitude_dec, double latitude_dec) {
    this->longitude_dec = longitude_dec;
    this->latitude_dec = latitude_dec;
    this->calculateGeoCoordinates(longitude_dec, latitude_dec);
}

double GEOKO::getLaengengrad_dez() {
    return this->longitude_dec;
}

void GEOKO::setLaengengrad_dez(double longitude_dec) {
    this->longitude_dec = longitude_dec;
}

double GEOKO::getBreitengrad_dez() {
    return this->latitude_dec;
}

void GEOKO::setBreitengrad_dez(double latitude_dec) {
    this->latitude_dec = latitude_dec;
}

int GEOKO::getBrGr() {
    return this->BrGr;
}

void GEOKO::setBrGr(int BrGr) {
    this->BrGr = BrGr;
}

int GEOKO::getBrMin() {
    return this->BrMin;
}

void GEOKO::setBrMin(int BrMin) {
    this->BrMin = BrMin;
}

double GEOKO::getBrSec() {
    return this->BrSec;
}

void GEOKO::setBrSec(double BrSec) {
    this->BrSec = BrSec;
}

int GEOKO::getLaGr() {
    return this->LaGr;
}

void GEOKO::setLaGr(int LaGr) {
    this->LaGr = LaGr;
}

int GEOKO::getLaMin() {
    return this->LaMin;
}

void GEOKO::setLaMin(int LaMin) {
    this->LaMin = LaMin;
}

double GEOKO::getLaSec() {
    return this->LaSec;
}

void GEOKO::setLaSec(double LaSec) {
    this->LaSec = LaSec;
}

void GEOKO::print() {
    printf("Laengengrad: %lf (%dgr, %d', %lf'')| Breitengrad: (%lf %dgr, %d', %lf'') \n", this->getLaengengrad_dez(),
           this->getLaGr(), this->getLaMin(), this->getLaSec(),
           this->getBreitengrad_dez(), this->getBrGr(), this->getBrMin(), this->getBrSec());
}