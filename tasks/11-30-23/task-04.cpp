//
// Created by Tim on 27.11.2023.
//
#include <cmath>
#include <cstdio>


bool isPrime(int x) {
    double max = sqrt(x);
    for (int y = 2; y <= max; y++) {
        if (x % y == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int prime = 5623;
    isPrime(prime) ? printf("It's a prime number!") : printf("It's not a prime number!");
}