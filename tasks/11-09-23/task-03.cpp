//
// Created by Tim on 08.11.2023.
//
#include <cstdio>

double getFibonacciNumber(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    }
    return getFibonacciNumber(n - 1) + getFibonacciNumber(n - 2);
}

double getQuotient(int n) {
    return getFibonacciNumber(n) / getFibonacciNumber(n - 1);
}


int main() {
    for (int i = 1; i <= 20; i++) {
        printf("%i\n", (int) getFibonacciNumber(i));
        double quotient = getQuotient(i);
        printf("%.15f\n", quotient);
    }
    return 0;
}