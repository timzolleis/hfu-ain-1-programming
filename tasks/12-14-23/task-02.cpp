//
// Created by TimZolleis on 13.12.2023.
//
#include <cstdio>
#include <cstring>
#include "types/stack.h"

bool contains(char elements[], char c) {
    char *pC = elements;
    while (*pC != '\0') {
        if (*pC == c) {
            return true;
        }
        pC++;
    }
    return false;
}

bool isValidString(char string[]) {
    char elements[] = {'(', ')', '{', '}', '[', ']'};
    //Go through each character
    char *s = string;
    while (*s != '\0') {
        if (!contains(elements, *s)) {
            return false;
        }
        s++;
    }
    return true;
}

bool isOpenBracket(const char *c) {
    char openBrackets[] = {'(', '[', '{'};
    return contains(openBrackets, *c);
}

bool isClosedBracket(const char *c) {
    char closedBrackets[] = {')', ']', '}'};
    return contains(closedBrackets, *c);
}

bool isMatchingClosingBracket(const char *openBracket, const char *closingBracket) {
    switch (*openBracket) {
        case '(': {
            return *closingBracket == ')';

        }
        case '[': {
            return *closingBracket == ']';
        }
        case '{':
            return *closingBracket == '}';
        default:
            return false;
    }
}


int main() {
    char string[100];
    printf("Please enter a few brackets...\n");
    fgets(string, 99, stdin);
    //Trim the string
    string[strcspn(string, "\n")] = '\0';
    //Check if it is valid
    if (!isValidString(string)) {
        printf("You entered invalid characters");
        return -1;
    }
    Stack stack;
    stack.init();
    char *pString = string;
    while (*pString != '\0') {
        if (isOpenBracket(pString)) {
            stack.push(*pString);
        } else {
            char lastOpenBracket = stack.pop();
            if (!isMatchingClosingBracket(&lastOpenBracket, pString)) {
                printf("Invalid string");
                return -1;
            }
        }
        pString++;
    }
    if (!stack.empty()) {
        printf("Some brackets remain unclosed.");
    }
    return 0;

}