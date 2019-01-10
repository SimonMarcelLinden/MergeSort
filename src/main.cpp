/**
 * @editor     CLion
 * @since      1.0.0
 * @package    MergeSort
 * @subpackage ./src
 * @author Jakob Hoefker <jakob.hoefker@smail.th-koeln.de>
 * @author Simon Marcel Linden <simon_marcel.linden@smail.th-koeln.de>
 * @date 05.12.2018
 *
 * Algorithmen und Datenstrukturen
 * Praktikum - 3
 * @team Team 25
 */

#include "./header/main.h"
#include <fstream>


int main() {
    int choice, amountData = 0;
    int listName;

    DVK doubleList;

    do {
        printf("1) Listenobjekt erstellen\n");
        printf("2) Liste mittels Heap Sort sortierung\n");
        printf("3) Liste mittels Mewrge Sort sotieren\n");
        printf("4) Daten in Liste schreiben\n");
        printf("7) Programm beenden\n");

        cin >> choice;

        switch (choice) {
            case 1: {
                printf("Gebe an wie viele Daten erzeugt werden sollen:\n");
                cin >> amountData;
                printf("Aus welcher Liste sollen die Daten bezogen werden?\n"
                       "[1] Daten1.csv\n"
                       "[2] Daten2.csv\n"
                       "[0] Abbrechen\n");
                do {
                    cin >> listName;
                    if (listName < 0 or listName > 2)
                        printf("Keine gueltige Eingabe");
                } while (listName < 0 or listName > 2);

                readCSV((listName == 0) ? "Daten1.csv" : "Daten2.csv", amountData, &doubleList);


                //TODO: Aufruf der der Funktion zum erstellen der Doppeltverketteten Liste.
            }
            case 2: {
                printf("Liste wird nun mittzels Heap-Sort sotiert und ausgegeben.\n");
                //TODO: Aufruf der Funktion Heap-Sort
                //TODO: Aufruf der Funktion der Ausgabe Liste
                break;
            }
            case 3: {
                printf("Liste wird nun mittzels Merge-Sort sotiert und ausgegeben.\n");
                //TODO: Aufruf der Funktion Merge-Sort
                //TODO: Aufruf der Funktion der Ausgabe Liste
                break;
            }
            case 4: {
                break;
            }
            case 7: {
                return 1;
            }
            default: {
                printf("Falsche Eingabe\n");
                break;
            }
        }
    } while (true);
}

void readCSV(string dataPath, int amount, DVK *list) {
    int index = 0;

    string sLatitude;    // Breitengrad
    string sLongitude;   // Längengrad

    double latitude;    // Breitengrad
    double longitude;   // Längengrad

    int latDeg;         // Breitengrad
    int longDeg;        // Längengrad

    int latMin;
    int longMin;

    double latSec;
    double longSec;

    ifstream dataCsv(dataPath);

    while (dataCsv.good() && index < amount) {
        string laengengrad_S;
        string breitengrad_S;
        getline(dataCsv, sLatitude, ',');
        getline(dataCsv, sLongitude, '\n');

        sscanf(breitengrad_S.c_str(), "%lf", &latitude);
        sscanf(laengengrad_S.c_str(), "%lf", &longitude);

        latDeg = latitude / 3600;
        latMin = latitude / 60 - latDeg * 60;
        latSec = latitude - latMin * 60 - latDeg * 60 * 60;

        longDeg = longitude / 3600;
        longMin = longitude / 60 - longDeg * 60;
        longSec = longitude - longMin * 60 - longDeg * 60 * 60;

        GEOKO *geoko = new GEOKO(latDeg, latMin, latSec, longDeg, longMin, longSec);
        geoko->print();
        i++;
    }
}