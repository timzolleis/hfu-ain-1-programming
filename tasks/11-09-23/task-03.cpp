//
// Created by Tim on 08.11.2023.
//
#include <cstdio>

//This way faster
double getFastFibonacciNumber(int n) {
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

//This works but has a high time complexity when n is large
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
        printf("%i\n", (int) getFastFibonacciNumber(i));
        double quotient = getQuotient(i);
        printf("%.15f\n", quotient);
    }
    return 0;
}