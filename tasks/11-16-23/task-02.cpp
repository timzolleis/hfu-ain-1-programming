//
// Created by Tim on 08.11.2023.
//
#include <time.h>
#include <cstdio>
#include <cstdlib>


void fillWithRandomNumbers(int *array, int length) {
    srand(time(0));
    for (int i = 0; i < length; ++i) {
        array[i] = rand() % 51;
    }
}

void printArray(int *array, int length) {
    for (int i = 0; i < length; ++i) {
        printf("%i\n", array[i]);
    }
}


int main() {
    int length = 100;
    int array[length];
    fillWithRandomNumbers(array, 100);
    //Now we count the occurrences
    int occurrences[51];
    for (int i = 0; i <= 50; i++) {
        int sum = 0;
        for (int j = 0; j < 100; j++) {
            int arrayNumber = array[j];
            if (arrayNumber == i) {
                sum++;
            }
        }
        occurrences[i] = sum;
    }
    printArray(array, 100);
    for (int i = 0; i <= 50; i++) {
        printf("%i: %i\n", i, occurrences[i]);
    }
}

