//
// Created by Tim on 27.11.2023.
//
#include <cctype>
#include <cstdio>
#include <cstring>
#include <cstdio>

//When called directly, its one word less. This is due to the nature of fgets, which stores a newline.
int calculateWords(const char *s) {
    const char *ps = s;
    if (*ps == '\0') {
        return 0;
    }
    int words = 0;
    while (*ps != '\0') {
        if (isspace(*ps) != 0) {
            words++;
        }
        ps++;
    }
    return words;
}

int calculateCharacters(const char *s) {
    int characters = 0;
    const char *ps = s;
    while (*ps != '\0') {
        if (isspace(*ps) == 0) {
            characters++;
        }
        ps++;
    }
    return characters;
}


int main() {
    int max = 80;
    char string[max];
    printf("Please enter a string...\n");
    fgets(string, max, stdin);
    int words = calculateWords(string);
    int characters = calculateCharacters(string);
    printf("Words: %i \nCharacters: %i", words, characters);
}