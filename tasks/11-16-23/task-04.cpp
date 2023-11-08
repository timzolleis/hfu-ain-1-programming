//
// Created by Tim on 08.11.2023.
//

#include <cstdio>
#include <cstring>

int main() {
    const int size = 100;
    char text[size];
    printf("Enter a string...\n");
    scanf("%99s", text);

    int length = 0;
    while (text[length] != '\0') {
        length++;
    }
    printf("The length of the string is %i\n", length);
    printf("The length of the string using strlen is %zu\n", strlen(text));

    return 0;
}


