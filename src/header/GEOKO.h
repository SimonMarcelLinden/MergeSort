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

#ifndef MERGESORT_GEOKO_H
#define MERGESORT_GEOKO_H

class GEOKO {
private:
    double longitude_dec;
    double latitude_dec;
    int BrGr;
    int BrMin;
    double BrSec;
    int LaGr;
    int LaMin;
    double LaSec;

    void calculateGeoCoordinates(double laengengrad, double latitude);
public:
    GEOKO(double longitude_dec, double latitude_dec);

    GEOKO();

    ~GEOKO();

    double getLaengengrad_dez();

    void setLaengengrad_dez(double longitude_dec);

    double getBreitengrad_dez();

    void setBreitengrad_dez(double latitude_dec);
    int getBrGr();

    void setBrGr(int BrGr);
    int getBrMin();

    void setBrMin(int BrMin);
    double getBrSec();

    void setBrSec(double BrSec);

    int getLaGr();
    void setLaGr(int LaGr);

    int getLaMin();
    void setLaMin(int LaMin);

    double getLaSec();
    void setLaSec(double LaSec);
    void print();
};

#endif //KOORDINATEN_SORTIERUNG_GEOKO_H

