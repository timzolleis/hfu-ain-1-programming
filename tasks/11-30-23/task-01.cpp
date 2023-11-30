//
// Created by Tim on 27.11.2023.
//
#include <cstdio>
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

int calculate(char op, int v1, int v2) {
    switch (op) {
        case '+':
            return v1 + v2;
        case '-':
            return v1 - v2;
        case '*':
            return v1 * v2;
        case '/':
            //Return -998 if division by zero
            if (v2 == 0) {
                return -998;
            }
            return v1 / v2;
        default:
            return -999;
    }
}

int main() {
    char op[1];
    int value1;
    int value2;

    printf("Enter the first number...\n");
    scanf("%i", &value1);
    int c;
    while ((c = getchar()) != '\n' && c != EOF) { }
    printf("Enter an operation...\n");
    fgets(op, 80, stdin);
    printf("Enter the second number...\n");
    scanf("%i", &value2);
    int result = calculate(*op, value1, value2);
    if (result == -999) {
        printf("You entered an invalid operator. Exiting...");
        return -1;
    }
    if (result == -998) {
        printf("Division by zero. Exiting...");
        return -1;
    }
    printf("Result, %i", result);
    return 1;
}
