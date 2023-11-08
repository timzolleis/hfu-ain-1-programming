//
// Created by Tim on 08.11.2023.
//

#include <time.h>
#include <cstdio>
#include <cstdlib>

void fillWithRandomNumbers(int *array, int length) {
    srand(time(0));
    for (int i = 0; i < length; ++i) {
        array[i] = rand();
    }
}

void printArray(int array[], int length) {
    for (int i = 0; i < length; ++i) {
        printf("%i\n", array[i]);
    }
}

bool isEven(int number) {
    return number % 2 == 0;
}

struct Sums {
    int evenSum;
    int oddSum;
};

Sums sumNumbers(int array[], int length) {
    Sums sums = {0, 0};
    for (int i = 0; i < length; i++) {
        if (isEven(array[i])) {
            sums.evenSum += array[i];
        } else {
            sums.oddSum += array[i];
        }
    }
    return sums;
}

int main() {
    int length = 20;
    int array[length];
    fillWithRandomNumbers(array, length);
    printArray(array, length);
    Sums sums = sumNumbers(array, length);
    printf("The sum of all even numbers is %i\n", sums.evenSum);
    printf("The sum of all odd numbers is %i\n", sums.oddSum);
}

