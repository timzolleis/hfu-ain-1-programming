//
// Created by Tim on 20.11.2023.
//
#include <cstdio>
#include <math.h>

void zp(int a, int b) {
    if (b < a) {
        printf("The second number must be greater than the first one!\n");
    }
    // We now need to find the first number that is a power of 2 and is greater than a
    int num = 1;
    while (num < a) {
        num *= 2;
    }
    while (num <= b) {
        printf("%i\n", num);
        num *= 2;
    }
}

int main() {
    int a;
    int b;
    printf("Enter two numbers...\n");
    scanf("%i", &a);
    scanf("%i", &b);
    zp(a, b);
    return 0;
}