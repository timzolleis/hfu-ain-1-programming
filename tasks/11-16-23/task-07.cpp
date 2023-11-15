//
// Created by Tim on 15.11.2023.
//
#include <cstdio>
#include <ctype.h>


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

bool isVocal(const char *character) {
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

void removeVocals(char *input) {
    int i = 0;
    while (input[i] != '\0') {
        char lowerCase = tolower(input[i]);
        printf("Lowercase, %c\n", lowerCase);
        if (isVocal(&lowerCase)) {
            input[i] = ' ';
        }
        i++;
    }
}


int main() {
    int max = 80;
    char string1[max];
    printf("Enter a string...\n");
    gets(string1);
    removeVocals(string1);
    removeSpaces(string1);

    printf("The string without vocals: %s\n", string1);

    return 0;
}