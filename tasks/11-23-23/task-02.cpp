//
// Created by Tim on 20.11.2023.
//
#include <cstdio>


void printLength(char *string) {

}

int main() {
    char string1[80];
    printf("Please enter a string...\n");
    gets(string1);
    printf("You entered %s\n", string1);
    char *charPtr = string1;
    int length = 0;
    while (*string1 != '\0') {
        length++;
        charPtr++;
    }
    printf("The length of the string is %i\n", length);
    return 0;
}