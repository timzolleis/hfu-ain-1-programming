//
// Created by TimZolleis on 06.12.2023.
//
#include <cstdio>
#include "types/date.hpp"
void printDateWithCopy(Date d) {
    printf("Your date: %i.%u.%i\n", d.day, d.month, d.year);
}

void printDateWithReference(Date &d) {
    printf("Your date: %i.%u.%i\n", d.day, d.month, d.year);
}

void printDateWithPointer(Date *d) {
    printf("Your date: %i.%u.%i\n", d->day, d->month, d->year);
}

int main(){
    Date date = {10, Date::December, 2023};
    printDateWithCopy(date);
    printDateWithReference(date);
    printDateWithPointer(&date);
}