//
// Created by TimZolleis on 14.12.2023.
//
#include "types/SafeArray.h"
#include "types/SafeArray.h"
#include "types/SafeArray.h"
#include "types/Test.h"


int main() {
    //Initialize the array with the values from 0 to 100 with an inital value
    SafeArray safeArray(100);
    //Manually set a value at position 10
    safeArray.setAt(10, 1);
    int valueAtPos10 = safeArray.getAt(10);
    int minimumValue = safeArray.getMinimum();
    //We assert that the minimum value must be 1
    Test::assert(minimumValue, EQUALS, 1);
    //Fill the array from 15-20 with another value
    safeArray.fill(10, 20, 50);
    //If we not get at index 15, it should be 50
    int valueAtPos15 = safeArray.getAt(15);
    //We assert that the value at index 15-20 is now 50
    for (int i = 0; i <= 5; i++) {
        int value = safeArray.getAt(i + 15);
        Test::assert(value, EQUALS, 50);
    };
    //Get a value that is out of bounds
    int outOfBounds = safeArray.getAt(99);
    bool isOutOfBounds = SafeArray::checkValue(outOfBounds, false);
    Test::assert(isOutOfBounds, IS, true);
    //Print our test summary
    Test::printSummary();
    return 0;
}