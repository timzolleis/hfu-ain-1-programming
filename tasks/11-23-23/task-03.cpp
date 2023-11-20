//
// Created by Tim on 20.11.2023.
//
#include <cstdio>

double getFibonacciNumber(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    }

    double result = 0;
    double previous = 0;
    double current = 1;
    for (int i = 2; i <= n; i++) {
        result = previous + current;
        previous = current;
        current = result;
    }
    return result;
}


int main() {
    double fibonacciNumbers[51];

    for (int i = 0; i <= 50; i++) {
        fibonacciNumbers[i] = getFibonacciNumber(i);
    }

    //Print it;
    double *ptr = fibonacciNumbers;
    for (int i = 0; i <= 50; i++) {
        printf("%i: %.0f\n", i, *ptr);
        ptr++;
    }

    return 0;
}