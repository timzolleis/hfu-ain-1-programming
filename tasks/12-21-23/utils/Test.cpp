//
// Created by Tim Zolleis on 11.01.24.
//
#include <cstdio>

#include "Test.h"

#define RESET   "\033[0m"
#define GREEN   "\033[32m"
#define RED     "\033[31m"

/* Initialize values */

int Test::total = 0;
int Test::failed = 0;


/* Main assertions */
void Test::assert(int value, TEST_INT_CONDITION condition, int expected) {
    const char *conditionAsString = getIntConditionAsString(condition);
    addTotal();
    switch (condition) {
        case EQUALS: {
            if (value != expected) {
                addFailed();
                Test::printIntErrorMessage(conditionAsString, value, expected);
            }
            break;
        }
        case NOT_EQUALS: {
            if (value == expected) {
                addFailed();
                Test::printIntErrorMessage(conditionAsString, value, expected);
            }
            break;
        }
        case LESS_THAN: {
            if (value >= expected) {
                addFailed();
                Test::printIntErrorMessage(conditionAsString, value, expected);
            }
            break;
        }
        case MORE_THAN:
            if (value <= expected) {
                addFailed();
                Test::printIntErrorMessage(conditionAsString, value, expected);
            }
    }
}


void Test::assert(bool value, const TEST_BOOL_CONDITION condition, bool expected) {
    const char* conditionString = getBoolConditionAsString(condition);
    addTotal();
    switch (condition) {
        case IS:
            if(value != expected){
                addFailed();
                Test::printBoolErrorMessage(conditionString, value, expected);
            }
            break;

        case IS_NOT:
            if(value == expected){
                addFailed();
                Test::printBoolErrorMessage(conditionString, value, expected);
            }
            break;
    }
}


/* Condition String formatters*/
const char *Test::getIntConditionAsString(TEST_INT_CONDITION condition) {
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

const char *Test::getBoolConditionAsString(TEST_BOOL_CONDITION condition) {
    switch (condition) {
        case IS:
            return "IS";
        case IS_NOT:
            return "IS_NOT";
    }
}


/* Print functions */
void Test::printIntErrorMessage(const char *condition, int actual, int expected) {
    fprintf(stderr, "%s Assertion failed \n EXPECTED: %i \n ACTUAL: %i \n", condition,
            expected, actual);
}

void Test::printBoolErrorMessage(const char *condition, bool actual, bool expected) {
    fprintf(stderr, "%s Assertion failed \n EXPECTED: %s \n ACTUAL: %s \n", condition, getBoolAsString(expected),
            getBoolAsString(actual));
}

void Test::printSummary() {
    if (failed > 0) {
        printf(RED "Passed %i tests out of %i" RESET, total - failed, total);

    } else {
        printf(GREEN "Passed %i tests out of %i" RESET, total - failed, total);
    }
}

/* Count implementation*/
void Test::addTotal() {
    Test::total++;
}

void Test::addFailed() {
    Test::failed++;
}

/* Helpers */
const char *Test::getBoolAsString(bool value) {
    return value ? "True" : "False";
}
