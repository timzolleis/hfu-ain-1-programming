//
// Created by Tim on 01.11.2023.
//

#include <cstdio>
#include <cmath>


bool isValidMonth(int month) {
    return month >= 1 && month <= 12;
}

bool isValidYear(int year) {
    return year >= 0;
}


bool isLeapYear(unsigned int year) {
    return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
}

int getDaysPerMonth(int month, unsigned int year) {
    switch (month) {
        case 2:
            return isLeapYear(year) ? 29 : 28;
        case 4:
        case 6:
        case 9:
        case 11:
            return 30;
        default:
            return 31;
    }
}


int main() {
    int month;
    unsigned int year;
    printf("Enter a month...\n");
    scanf("%i", &month);
    if (!isValidMonth(month)) {
        printf("Your input is invalid.");
        return 1;
    }
    printf("Enter a year...\n");
    scanf("%u", &year);
    if (!isValidYear(year)) {
        printf("Your input is invalid.");
        return 1;
    }

    int daysPerMonth = getDaysPerMonth(month, year);
    printf("Your year has == %i == days in month == %i ==\n", daysPerMonth, month);
}






