//
// Created by Tim on 20.11.2023.
//
#include <cstdio>

int power(int number) {
    return number * number;
}

int main() {
    for (int i = 0; i < 20; i++) {
        printf("power(%i) = %i\n", i, power(i));
    }
}