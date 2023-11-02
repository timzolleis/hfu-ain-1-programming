//
// Created by Tim on 02.11.2023.
//
#include <cstdio>

bool isEven(int number) {
    return number % 2 == 0;
}

bool isValidISBN(char (&isbn)[13]) {
    int sum = 0;
    for (int i = 0; i <= 13; ++i) {
        if (isEven(i)) {
            sum += isbn[i] * 1;
        } else {
            sum += isbn[i] * 3;
        }
    }
    //When we're done, we just check if the sum is divisible by 10
    return sum % 10 == 0;
}

int main() {
    char isbn[13];
    printf("Enter an ISBN...\n");
    scanf("%s", isbn);
    if (isValidISBN(isbn)) {
        printf("Your ISBN is valid.");
    } else {
        printf("Your ISBN is invalid.");
    }
    return 0;
}