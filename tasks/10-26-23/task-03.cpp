//
// Created by Tim on 01.11.2023.
//
#include <cstdio>

int getValue(int input) {
    if (input > 0) {
        return 1;
    } else if (input < 0) {
        return -1;
    } else {
        return 0;
    }
}

int main() {
    int input;
    printf("Enter a number... \n");
    scanf("%i", &input);
    int value = getValue(0);
    printf("f(%i) = %i", input, value);
    return 0;
}