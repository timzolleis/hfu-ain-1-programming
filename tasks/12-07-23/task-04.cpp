//
// Created by TimZolleis on 06.12.2023.
//
#include <cstdio>
#include "types/date.hpp"

bool before(const Date &dateA, const Date &dateB) {
    //Check years
    if (dateA.year > dateB.year) {
        return false;
    }
    if (dateA.year < dateB.year) {
        return true;
    }
    //Now we only have the case of the same year
    if (dateA.month > dateB.month) {
        return false;
    }
    if (dateA.month < dateB.month) {
        return true;
    }
    //Now we are in the same month
    return dateA.day < dateB.day;
}


int main() {
    Date dateA = {12, Date::January, 2024};
    Date dateB = {10, Date::April, 2023};
    bool isBefore = before(dateA, dateB);
    printf(isBefore ? "The date is before" : "The date is not before");
}