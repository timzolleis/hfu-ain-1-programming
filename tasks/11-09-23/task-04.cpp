//
// Created by Tim on 08.11.2023.
//
#include <cstdio>
#include <math.h>

double getNumber(double number, double a) {
    return (number + (a / number)) / 2;
}

double calculateSquareRootWithForLoop(double a, int precision) {
    double result = 1;
    for (int count = 1; count < precision; count++) {
        result = getNumber(result, a);
    }
    return result;
}


double calculateSquareRootWithWhileLoop(double a) {
    double result = 1;
    do {
        result = getNumber(result, a);
    } while (fabs(result - getNumber(result, a)) >= 0.000001);
    return result;
}


int main() {
    int a;
    printf("Enter a number for a...\n");
    scanf("%i", &a);
    double root = calculateSquareRootWithForLoop(a, 10);
    double whileRoot = calculateSquareRootWithWhileLoop(a);
    printf("The  (for) square root of %i is %f\n", a, root);
    printf("The (while) square root of %i is %f", a, whileRoot);
    return 0;
}
