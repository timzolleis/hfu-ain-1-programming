//
// Created by Tim on 08.11.2023.
//

#include <cstdio>
#include <math.h>

int getChar(int number) {
    return number % 2 == 0 ? 0 : 1;
}

void printBinaryNumber(int number) {

    // Get the number of bits needed for the length of the array
    int length = ceil(log2(number + 1));
    int array[length];
    int current = number;
    for (int i = 0; i < length; i++) {
        array[length - i - 1] = getChar(current);
        current = current / 2;
    }
    for (int i = 0; i < length; i++) {
        printf("%i", array[i]);
    }
}

int main() {
    int number;
    printf("Enter a number...\n");
    scanf("%i", &number);
    printBinaryNumber(number);
}