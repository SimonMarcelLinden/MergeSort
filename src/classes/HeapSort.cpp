/**
 * @editor     CLion
 * @since      1.0.0
 * @package    MergeSort
 * @subpackage ./src/classes
 * @author Jakob Hoefker <jakob.hoefker@smail.th-koeln.de>
 * @author Simon Marcel Linden <simon_marcel.linden@smail.th-koeln.de>
 * @date 05.12.2018
 *
 * Algorithmen und Datenstrukturen
 * Praktikum - 3
 * @team Team 25
 */

#include "../header/HeapSort.h"

void HeapSort::heapify(DVKE *arr, int laenge, int i) {
    int largest = i; // Initialize largest as root
    int left = 2 * i + 1; // left = 2*i + 1
    int right = 2 * i + 2; // right = 2*i + 2

    // If left child is larger than root
    if (left < laenge && arr[left] > arr[largest])
        largest = left;

    // If right child is larger than largest so far
    if (right < laenge && arr[right] > arr[largest])
        largest = right;

    // If largest is not root
    if (largest != i) {
        swap(arr[i], arr[largest]);

        // Recursively heapify the affected sub-tree
        heapify(arr, laenge, largest);
    }
}

void HeapSort::heapSort(DVKE *arr, int laenge) {
    // Build heap
    for (int i = laenge / 2 - 1; i >= 0; i--)
        heapify(arr, laenge, i);

    // One by one extract an element from heap
    for (int i = laenge - 1; i >= 0; i--) {
        // Move current root to end
        swap(arr[0], arr[i]);

        // max heap
        heapify(arr, i, 0);
    }
}
