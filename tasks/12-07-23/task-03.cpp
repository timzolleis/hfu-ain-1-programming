//
// Created by TimZolleis on 06.12.2023.
//
#include <cstdio>

struct Date {
    int day;
    enum month {
        January, February, March, April, May, June, July, August, September, October, November, December
    };
    Date::month month;
    int year;

};

void printDateWithCopy(Date d) {
    printf("Your date: %i.%u.%i\n", d.day, d.month +1, d.year);
}

void printDateWithReference(Date &d) {
    printf("Your date: %i.%u.%i\n", d.day, d.month +1, d.year);
}

void printDateWithPointer(Date *d) {
    printf("Your date: %i.%u.%i\n", d->day, d->month +1, d->year);
}

int main(){
    Date date = {10, Date::December, 2023};
    printDateWithCopy(date);
    printDateWithReference(date);
    printDateWithPointer(&date);
}