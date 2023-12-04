//
// Created by Tim on 27.11.2023.
//
#include <cstring>
#include <cstdio>
#include <cctype>

void calculateWords(const char *s, int *w) {
    const char *ps = s;
    if (*ps == '\0') {
        *w = 0;
    }
    int words = 0;
    while (*ps != '\0') {
        if (isspace(*ps) != 0) {
            words++;
        }
        ps++;
    }
    *w = words;
}

void calculateCharacters(const char *s, int *c) {
    int characters = 0;
    const char *ps = s;
    while (*ps != '\0') {
        if (isspace(*ps) == 0) {
            characters++;
        }
        ps++;
    }
    *c = characters;
}

int main() {
    int max = 80;
    char string[max];
    int characters = 0, words = 0;
    printf("Please enter a string...\n");
    fgets(string, max, stdin);
    calculateCharacters(string, &characters);
    calculateWords(string, &words);
    printf("Words: %i \nCharacters: %i", words, characters);

}

