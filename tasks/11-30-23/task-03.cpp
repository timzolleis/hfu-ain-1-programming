//
// Created by Tim on 27.11.2023.
//
#include <cstdio>

long recursiveGgt(long x, long y) {
    if (x == y) {
        return x;
    }
    if (x > y) {
        return recursiveGgt(x - y, y);
    }
    if (x < y) {
        return recursiveGgt(x, y - x);
    }
    return -999;
}

int whileGgt(int x, int y) {
    int *px = &x;
    int *py = &y;
    while (*px != *py) {
        if (*px > *py) {
            *px = *px - *py;
        }
        if (*px < *py) {
            *py = *py - *px;
        }
    }
    return x;
}

int main(){
    int a = 10;
    int b = 100;

    int recursiveResult = recursiveGgt(a, b);
    int whileResult = whileGgt(a, b);
    printf("Result with recursive function call: %i\n", recursiveResult);
    printf("Result with while loop:  %i", whileResult);

}