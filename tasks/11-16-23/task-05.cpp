//
// Created by Tim on 15.11.2023.
//
#include <cstdio>


int main() {
    int max = 80;
    char string1[max];
    char string2[max];

    //Read the first string
    printf("Enter the first string...\n");
    gets(string1);
    printf("You entered %s \n", string1);

    //Read the second string
    printf("Enter the second string...\n");
    gets(string2);
    printf("You entered %s \n", string2);

    //Compare the two strings
    int i = 0;
    while (string1[i] != '\0' && string2[i] != '\0') {
        if (string1[i] != string2[i]) {
            printf("The strings are not equal");
            return 0;
        }
        i++;
    }
    printf("The strings are equal");
    return 0;
}