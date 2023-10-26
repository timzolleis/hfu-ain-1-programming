//
// Created by Tim on 26.10.2023.
//
#include <cstdio>


bool isLeapYear(unsigned int year) {
    return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
}


int main() {
    unsigned int year = 2020;
    isLeapYear(year) ? printf("The year %u is a leap year", year) : printf("The year %u is not a leap year", year);
    return 0;
}
