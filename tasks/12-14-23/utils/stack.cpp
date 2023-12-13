//
// Created by TimZolleis on 13.12.2023.
//
#include "../types/stack.h"
#include <cstdio>

void Stack::init() {
    lastIndex = -1;
}

void Stack::push(char element) {
    elements[lastIndex + 1] = element;
    lastIndex++;
}

char Stack::pop() {
    if (empty()) {
        printf("The stack is empty. Cannot remove elements\n");
        return 'E';
    }
    char element = elements[lastIndex];
    elements[lastIndex] = '\0';
    lastIndex--;
    return element;
}

char Stack::top() {
    if (empty()) {
        printf("The stack is empty. Cannot read elements\n");
        return 'E';
    }
    return empty() ? 'E' : elements[lastIndex];
}

unsigned int Stack::size() const {
    return lastIndex + 1;
}

bool Stack::empty() const {
    return lastIndex == -1;
}

void Stack::clear() {
    for (int i = -1; i <= lastIndex; i++) {
        elements[i] = '\0';
    }
    lastIndex = -1;
}

