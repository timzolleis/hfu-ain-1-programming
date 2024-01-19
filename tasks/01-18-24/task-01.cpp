//
// Created by TimZolleis on 14.12.2023.
//
#include "types/SafeArray.h"
#include "types/SafeArray.h"
#include "types/SafeArray.h"
#include "types/Test.h"
#include <cstdio>q
int main() {
    //Initialize the array with the values from 0 to 100 with an inital value
    int initValue = 100;
    SafeArray safeArray;
    //Make sure that we have nothing in the array
    int initialLength = safeArray.length();
    Test::assert(initialLength, EQUALS, 0);
    //Manually set a value at position 10
    safeArray.setAt(10, initValue);
    int valueAtPos10 = safeArray.getAt(10);
    Test::assert(valueAtPos10, EQUALS, initValue);
    safeArray.setAt(5, 10);
    //Set at an index that does not exist
    safeArray.setAt(20, 10);
    int valueAtIndex20 = safeArray.getAt(20);
    Test::assert(valueAtIndex20, EQUALS, 10);
    int length = safeArray.length();
    //Assert that we have now an array with 21 elements
    Test::assert(length, EQUALS, 21);
    //Print test summary
    Test::printSummary();
    return 0;
}