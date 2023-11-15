//
// Created by Tim on 15.11.2023.
//
#include <cstdio>
#include <cstring>

int main() {
    int length = 80;
    char string1[length];
    printf("Enter a string...\n");
    gets(string1);
    char string2[length];
    printf("Enter a string...\n");
    gets(string2);

    //We want to concatenate string2 to string1
    unsigned long long string1Length = strlen(string1);
    unsigned long long string2Length = strlen(string2);
    unsigned long long arrayLength = string1Length + string2Length;

    char concatenatedString[arrayLength];

    for (int i = 0; i < string1Length; i++) {
        concatenatedString[i] = string1[i];
    }
    for (int i = 0; i < string2Length; i++) {
        concatenatedString[string1Length + i] = string2[i];
    }
    printf("The concatenated string is %s\n", concatenatedString);
    return 0;
}