/**
 * @editor     CLion
 * @since      1.0.0
 * @package    Sel3ectionSort
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

int main() {
    int choice,
            amountData;
    string listName;

    do {
        cout << "1) Listenobjekt erstellen" << endl;
        cout << "2) Liste mittels Heap Sort sortierung" << endl;
        cout << "3) Liste mittels Mewrge Sort sotieren" << endl;
        cout << "4) Daten in Liste schreiben" << endl;
        cout << "7) Programm beenden" << endl;

        cin >> choice;

        switch (choice) {
            case 1: {
                cout << "Gebe an wie viele Daten erzeugt werden sollen:" << endl;
                cin >> amountData;
                cout << "Aus welcher Liste sollen die Daten bezogen werden?" << endl <<
                     "Daten1.csv oder Daten2.csv" << endl;
                cin >> listName;
                //TODO: Aufruf der der Funktion zum erstellen der Doppeltverketteten Liste.
            }
            case 2: {
                cout << "Liste wird nun mittzels Heap-Sort sotiert und ausgegeben.";
                //TODO: Aufruf der Funktion Heap-Sort
                //TODO: Aufruf der Funktion der Ausgabe Liste
                break;
            }
            case 3: {
                cout << "Liste wird nun mittzels Merge-Sort sotiert und ausgegeben.";
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
                cout << "Falsche Eingabe" << endl;
                break;
            }
        }
    } while (true);
}