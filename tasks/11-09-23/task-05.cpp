//
// Created by Tim on 08.11.2023.
//
#include <cstdio>

void printTriangle() {
    int row, column;
    for (row = 0; row <= 20; row = row + 1) {
        for (column = 1; column <= row; column = column + 1) {
            printf("*");
        }
        printf("\n");
    }
}

void printReversedTriangle(){
    int row, column;
    for (row = 20; row >= 0; row = row - 1) {
        for (column = 1; column <= row; column = column + 1) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    printReversedTriangle();
    return 0;
}

