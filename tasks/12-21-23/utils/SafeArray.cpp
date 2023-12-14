
//
// Created by TimZolleis on 14.12.2023.
//
#include "../types/SafeArray.h"

int SafeArray::getSize() {
    return sizeof(*elements) / sizeof(int);
}

int SafeArray::getAt(unsigned int pos) {
    if (pos > 99 || isSet[pos] == false) {
        return -999;
    }
    return elements[pos];
}

bool SafeArray::setAt(unsigned int pos, int val) {
    if (pos > 99) {
        return false;
    }
    elements[pos] = val;
    isSet[pos] = true;
    return true;
}

SafeArray::SafeArray(int init) {
    for (int i = 0; i < 100; i++) {
        isSet[i] = true;
        elements[i] = init;
    }
}

int SafeArray::getMinimum() {
    int minimum = elements[0];
    for (int i = 0; i < 100; i++) {
        if (isSet[i] && elements[i] < minimum) {
            minimum = elements[i];
        }
    }
    return minimum;
}

bool SafeArray::fill(unsigned int pos1, unsigned int pos2, int value) {
    if (pos1 > pos2 || pos1 == pos2) {
        return false;
    }
    if (pos1 > 99 || pos2 > 99) {
        return false;
    }
    for (int i = pos1; i <= pos2; i++) {
        elements[i] = value;
    }
    return true;
}