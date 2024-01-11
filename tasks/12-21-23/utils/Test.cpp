//
// Created by Tim Zolleis on 11.01.24.
//
#include <cstdio>

#include "Test.h"
#define RESET   "\033[0m"
#define GREEN   "\033[32m"
#define RED     "\033[31m"

int Test::total = 0;
int Test::failed = 0;

void Test::assertInt(int value, TEST_CONDITION condition, int expected) {
    const char *conditionAsString = getConditionAsString(condition);
    addTotal();
    switch (condition) {
        case EQUALS: {
            if (value != expected) {
                addFailed();
                Test::printErrorMessage(conditionAsString, value, expected);
            }
            break;
        }
        case NOT_EQUALS: {
            if(value == expected){
                addFailed();
                Test::printErrorMessage(conditionAsString, value, expected);
            }
            break;
        }
        case LESS_THAN: {
            if(value >= expected){
                addFailed();
                Test::printErrorMessage(conditionAsString, value, expected);
            }
            break;
        }
        case MORE_THAN:
            if(value <= expected){
                addFailed();
                Test::printErrorMessage(conditionAsString, value, expected);
            }
    }
}

const char *Test::getConditionAsString(TEST_CONDITION condition) {
    switch (condition) {
        case EQUALS:
            return "EQUALS";
        case NOT_EQUALS:
            return "NOT_EQUALS";
        case LESS_THAN:
            return "LESS_THAN";
        case MORE_THAN:
            return "MORE_THAN";
        default: {
            return "NOT_IMPLEMENTED";
        }
    }

}

void Test::printErrorMessage(const char *condition, int actual, int expected) {
    fprintf(stderr, "%s Assertion failed \n EXPECTED: %i \n ACTUAL: %i \n", condition,
            expected, actual);
}

void Test::printSummary() {
    if(failed > 0){
        printf( RED "Passed %i tests out of %i" RESET, total-failed, total);

    } else {
    printf(GREEN "Passed %i tests out of %i" RESET, total - failed, total);}
}

void Test::addTotal() {
    Test::total++;
}

void Test::addFailed() {
    Test::failed++;
}
