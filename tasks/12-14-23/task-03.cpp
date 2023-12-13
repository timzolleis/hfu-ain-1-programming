//
// Created by TimZolleis on 13.12.2023.
//
#include <cstdio>

void swap(int *a, int *b) {
    int intermediate = *a;
    *a = *b;
    *b = intermediate;
}


void sort(int *a, unsigned int length) {
    int i, j;
    bool swapped;
    for (i = 0; i < length - 1; i++) {
        swapped = false;
        for (j = 0; j < length - i - 1; j++) {
            int *firstElementPointer = (a + j);
            int *secondElementPointer = (a + j + 1);
            if (*firstElementPointer > *secondElementPointer) {
                swap(firstElementPointer, secondElementPointer);
                swapped = true;
            }
        }
        if (!swapped)
            break;
    }
}


int main() {
    int array[] = {15, 7, 13, 24, 9, 25};
    sort(array, 6);
    for (int i = 0; i < 6; i++) {
        printf("Array: %i\n", array[i]);
    }


}