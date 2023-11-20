//
// Created by Tim on 20.11.2023.
//
#include <cstdio>
#include <cstring>

void reverse(const char *s) {
    int length = strlen(s);
    char reversed[length + 1];
    for (int i = 0; i < length; ++i) {
        reversed[i] = s[length - 1 - i];
    }
    reversed[length] = '\0';
    printf("The reversed string is: %s", reversed);
}


int main() {
    char string[80];
    printf("Please enter a string: \n");
    fgets(string, 80, stdin);
    reverse(string);
    return 0;
}