//
// Created by Tim on 20.11.2023.
//
#include <cstdio>
#include <cstring>

int occurrences(const char *s, const char *m) {
    //We want to return how often m occurs in s
    int occurrences = 0;
    int sLength = strlen(s);
    int mLength = strlen(m);
    for (int i = 0; i < sLength; i++) {
        //We begin if the first character matches
        if (s[i] == m[0]) {
            //We check if the next characters match
            if (mLength - 1 == 1) {
                occurrences++;
            } else {
                for (int j = 1; j <= mLength; j++) {
                    if (s[i + j] != m[j]) {
                        break;
                        //If we are at the end, we have found a match
                    } else if (j == mLength - 2) {
                        occurrences++;
                    }

                }
            }
        }
    }
    return occurrences;
}


int main() {
    char string[80];
    char pattern[80];
    printf("Enter a string...\n");
    fgets(string, 80, stdin);
    printf("Enter a pattern...\n");
    fgets(pattern, 80, stdin);
    printf("You entered %s\n", string);
    printf("The pattern occurs %i times in the string\n", occurrences(string, pattern));
    return 0;


}