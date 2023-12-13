//
// Created by TimZolleis on 13.12.2023.
//
#include "types/stack.h"
#include <cstdio>

int main() {
    Stack s;
    s.init();
    s.push('a');
    s.push('b');
    s.push('c');
    printf("Top: %c \n", s.top());
    s.pop();
    printf("Size: %i \n", s.size());
    s.pop();
    printf("Top: %c \n", s.top());
    s.pop();
    printf("Empty", (s.empty() ? "True" : "False"));
}