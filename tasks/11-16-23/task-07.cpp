//
// Created by Tim on 15.11.2023.
//
#include <cstdio>
#include <ctype.h>
#include <cstring>


bool contains(const char *array, char item) {
    int i = 0;
    while (array[i] != '\0') {
        if (array[i] == item) {
            return true;
        }
        i++;
    }
    return false;
}

bool isVowel(const char *character) {
    char vocals[] = {'a', 'e', 'i', 'o', 'u'};
    return contains(vocals, *character);
}

void removeSpaces(char *string) {
    char *backup = string;
    do {
        //If backup is not a space, copy it to string (at the next position)
        if (*backup != ' ')
            *string++ = *backup;
    } while (*backup++ != '\0');
}

void removeVowels(char *input) {
    int i = 0;
    while (input[i] != '\0') {
        char lowerCase = tolower(input[i]);
        printf("Lowercase, %c\n", lowerCase);
        if (isVowel(&lowerCase)) {
            input[i] = ' ';
        }
        i++;
    }
}


void printWithoutVowels(char *input) {
    int i = 0;
    int count = 0;
    char newCharArray[strlen(input)];

    while (input[i] != '\0') {
        char character = input[i];
        char lowerCase = tolower(character);
        if (!isVowel(&lowerCase)) {
            newCharArray[count] = character;
            count++;
        }
        i++;
    }
    printf("The string without vocals: %s\n", newCharArray);
}


int main() {
    int max = 80;
    char string1[max];
    printf("Enter a string...\n");
    gets(string1);
//    removeVowels(string1);
//    removeSpaces(string1);
    printWithoutVowels(string1);


    return 0;
}