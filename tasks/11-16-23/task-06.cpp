//
// Created by Tim on 15.11.2023.
//
#include <cstdio>
#include <cstring>

int main() {
    int max = 80;
    char string1[max];
    printf("Enter a string...\n");
    gets(string1);
    //Now we need to determine the length of the string and reverse it
    int length = strlen(string1);
    char reversedString[length];
    for (int i = 0; i < length; i++) {
        reversedString[i] = string1[length - i - 1];
    }
    reversedString[length] = '\0';
    printf("Your string in the reversed order: %s\n", reversedString);
    return 0;
}