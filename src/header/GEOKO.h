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

#ifndef SELECTIONSORT_GEOKO_H
#define SELECTIONSORT_GEOKO_H


class GEOKO {
public:
    GEOKO();

    ~GEOKO();

private:
    int BrGr;
    int LaGr;
    int BrMin;
    int LaMin;
    double BrSec;
    double LaSec;

protected:
    void Data();

public:
    void setBrGr(int BrGr);

    void setLaGr(int LaGr);

    void setBrMin(int BrMin);

    void setLaMin(int LaMin);

    void setBrSec(double BrSec);

    void setLaSec(double LaSec);

    int getBrGr();

    int getLaGr();

    int getBrMin();

    int getLaMin();

    double getBrSec();

    double getLaSec();
};


#endif //SELECTIONSORT_GEOKO_H
