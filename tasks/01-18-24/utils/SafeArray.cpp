
//
// Created by TimZolleis on 14.12.2023.
//
#include "../types/SafeArray.h"
#include <cstdio>
#include <algorithm>

int SafeArray::length() const {
    return size;
}

int SafeArray::getAt(int index) {
    //If its out of bounds we can increase the size
    if (isOutOfBounds(index)) {
        increaseSize(index + 1);
    }
    //But its probably still not set so we return that
    if (!isSet[index]) {
        return -999;
    }
    return elements[index];
}

bool SafeArray::isOutOfBounds(int index) {
    return index > length() - 1;
}

bool SafeArray::isInitialized() {
    return length() > 0;
}

void SafeArray::increaseSize(int newLength) {
    int *tempElements = new int[newLength];
    bool *tempIsSet = new bool[newLength];
    //Copy the new elements
    std::copy(elements, elements + length(), tempElements);
    //Increase the current size
    size = newLength;
    //Delete the old arrays
    delete[] elements;
    delete[] isSet;
    //Move the tempElements array to the elements
    elements = tempElements;
    isSet = tempIsSet;
}

bool SafeArray::setAt(int index, int val) {
    //We have to check if the position is larger than the size of the array
    if (isOutOfBounds(index)) {
        increaseSize(index + 1);
    }
    //Just set the values
    elements[index] = val;
    isSet[index] = true;
    return true;
}

SafeArray::SafeArray(int init) {
    this->elements = new int[10];
    this->isSet = new bool[10];
    for (int i = 0; i < 10; i++) {
        elements[i] = init;
        isSet[i] = true;
    }
    size = 10;
}

SafeArray::SafeArray() {
    size = 0;
    this->elements = nullptr;
    this->isSet = nullptr;
}

int SafeArray::getMinimum() {
    int minimum = elements[0];
    //Loop through all elements and determine if its smaller
    for (int i = 0; i < length(); i++) {
        if (elements[i] < minimum) {
            minimum = elements[i];
        }
    }
    return minimum;
}

bool SafeArray::fill(unsigned int index1, unsigned int index2, int value) {
    if (index1 > index2 || index1 == index2) {
        return false;
    }
    if (isOutOfBounds(index2)){
        increaseSize(index2 +1);
    }
    for (unsigned int i = index1; i <= index2; i++) {
        elements[i] = value;
    }
    return true;
}

bool SafeArray::checkValue(int value, bool print = false) {
    if (value == -999) {
        if (print) {
            fprintf(stderr, "INDEX OUT OF BOUNDS \n");
        }
        return false;
    }
    return true;
}