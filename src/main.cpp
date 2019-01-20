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

#include <iostream>
#include <string>
#include <fstream>

#include "./header/DVK.h"
//#include "./header/DVKE.h"
//#include "./header/GEOKO.h"
#include "./header/HeapSort.h"
#include "./header/MergeSort.h"

#include <chrono>

using namespace std;

void createDVK(DVK *liste, string filename, int numberOfSets);

void writeCSV(DVK *liste, string filename);

int main() {
    int choiceMain, choiceFile, numberOfSets;
    string filename;
    bool choiceList = false;
    string errorMessage = "FEHLER: Bitte erst Datensatz einlesen!";
    DVK *liste;
    do {
        cout << endl;
        cout << "(1) Datensatz einlesen" << endl;
//        cout << "(2) Liste anzeigen - Forward-Verkettung" << endl;
//        cout << "(3) Liste anzeigen - Reverse-Verkettung" << endl;
        cout << "(4) Liste anzeigen - Array" << endl;
//        cout << "(5) Element an liste anhaengen." << endl;
        cout << "(6) Mittelpunkt anzeigen" << endl;
        cout << "(7) Liste sortieren mit Heap Sort" << endl;
        cout << "(8) Liste sortieren mit Merge Sort" << endl;
        cout << "(9) Daten in Liste schreiben" << endl;

        cin >> choiceMain;

        switch (choiceMain) {
            case 1: {
                cout << "Wie viele Datensaetze sollen eingelesen werden?" << endl;
                cin >> numberOfSets;
                do {
                    cout << "(1) Daten aus Daten1.csv einlesen" << endl;
                    cout << "(2) Daten aus Daten2.csv einlesen" << endl;
                    cin >> choiceFile;
                    switch (choiceFile) {
                        case 1:
                            filename = "Daten1";
                            choiceList = true;
                            break;
                        case 2:
                            filename = "Daten2";
                            choiceList = true;
                            break;
                    }
                } while (choiceFile != 1 && choiceFile != 2);
                liste = new DVK(numberOfSets);
                createDVK(liste, filename, numberOfSets);
                break;
            }
            case 2:
                if (choiceList == false) {
                    cout << errorMessage << endl;
                } else {
                    liste->printForward();
                }
                break;
            case 3:
                if (choiceList == false) {
                    cout << errorMessage << endl;
                } else {
                    liste->printReverse();
                }
                break;
            case 4:
                if (choiceList == false) {
                    cout << errorMessage << endl;
                } else {
                    liste->printAllElements();
                }
                break;
            case 5:
                if (choiceList == false) {
                    cout << errorMessage << endl;
                } else {
                    //TODO: Element auslesen und anhängen
                    numberOfSets++;
//                    liste->printAllElements();
                }
                break;
            case 6:
                if (choiceList == false) {
                    cout << errorMessage << endl;
                } else {
                    printf("Mittelpunkt: \n");
                    liste->getMiddlepoint()->print();
                }
                break;
            case 7: {
                if (choiceList == false) {
                    cout << errorMessage << endl;
                } else {
                    printf("Unsortierte Liste \n");
//                liste->printAllElements();
                    printf("Heap Sort \n");
                    HeapSort *heapSort = new HeapSort;
                    auto start = chrono::steady_clock::now();
                    heapSort->heapSort(liste->getAlleElemente(), numberOfSets);
                    auto end = chrono::steady_clock::now();
                    double elapseTime = double(chrono::duration_cast<chrono::microseconds>(end - start).count());
                    printf("\nSortierte Liste \n");
//                liste->printAllElements();
                    cout << "\n Heapsort brauchte " << elapseTime << "ms" << endl;
                }
                break;
            }
            case 8: {
                if (choiceList == false) {
                    cout << errorMessage << endl;
                } else {
                    printf("Unsortierte Liste \n");

                    printf("Merge Sort \n");
                    MergeSort *mergeSort = new MergeSort;
                    auto start_2 = chrono::steady_clock::now();
                    mergeSort->mergeSort(liste->getAlleElemente(), 0, numberOfSets - 1);
                    auto end_2 = chrono::steady_clock::now();
                    double elapseTime_2 = double(chrono::duration_cast<chrono::microseconds>(end_2 - start_2).count());
                    printf("\nSortierte Liste \n");
//                liste->printAllElements();
                    cout << "\n MergeSort brauchte " << elapseTime_2 << "ms" << endl;
                }
                break;
            }
            case 9:
                if (choiceList == false) {
                    cout << errorMessage << endl;
                } else {
                    printf("Daten der Liste schreiben \n");
                    writeCSV(liste, filename);
                }
                break;
            default:
                break;
        }
    } while (choiceMain != 0);
    return 0;
}

void createDVK(DVK *liste, string filename, int numberOfSets) {
    //datei1.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Erste Zeile ignorieren
    string longitude_String;
    string latitude_String;
    double longitude;
    double latitude;
    int i = 0;

    ifstream input;
    input.open(filename + ".csv", ios::in); // Datei öffnen

//    ifstream ip(filename + ".csv");
//    if (!ip.is_open()) {
//        cout << "Fehler beim Einlesen der Datei" << endl;
//        return;
//    }
//    while (ip.good() && i < numberOfSets) {
    if (input.is_open()) {
        while (i < numberOfSets) {
            getline(input, longitude_String, ',');
            getline(input, latitude_String, '\n');
            sscanf(latitude_String.c_str(), "%lf", &latitude);
            sscanf(longitude_String.c_str(), "%lf", &longitude);
            liste->addElement(new GEOKO(longitude, latitude));
            i++;
        }
        liste->calculateMiddlepoint();
        liste->calculateDistanceMiddlepoint();
    } else {
        cout << "Fehler beim Einlesen der Datei" << endl;
        return;
    }
}

void writeCSV(DVK *liste, string filename) {
    ofstream myFile;
    filename = filename + "_S.csv";

    cout << "Daten werden in " << filename << " geschrieben" << endl;
    myFile.open(filename);
    myFile << "Anzahl der Daten, " << liste->getMax() << ", " << "Mittelpunkt, " << "Laengengrad,  ("
           << liste->getMiddlepoint()->getLaGr() << "gr |" << liste->getMiddlepoint()->getLaMin() << "'|"
           << liste->getMiddlepoint()->getLaSec() << "'')" << ", Breitengrad, " << liste->getMiddlepoint()->getBrGr()
           << "gr|" << liste->getMiddlepoint()->getBrMin() << "'|" << liste->getMiddlepoint()->getBrSec() << "'');"
           << endl;
    for (int i = 0; i < liste->getMax(); i++) {
        myFile << i << ", " << liste->getAlleElemente()[i].getData()->getLaengengrad_dez() << ", "
               << liste->getAlleElemente()[i].getData()->getBreitengrad_dez() << ", "
               << liste->getAlleElemente()[i].getDistance() << ";" << endl;
    }
}