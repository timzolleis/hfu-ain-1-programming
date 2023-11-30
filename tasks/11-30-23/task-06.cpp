//
// Created by Tim on 27.11.2023.
//

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

