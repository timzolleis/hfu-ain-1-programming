//
// Created by Tim on 27.11.2023.
//
#include <cstdio>
#include <cstdlib>

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


int printResult(int result) {
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


int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("USAGE: [NUM1] [OPERATOR] [NUM2]");
        return -1;
    }
    int num1 = strtol(argv[1], nullptr, 10);
    char op = *argv[2];
    int num2 = strtol(argv[3], nullptr, 10);
    int result = calculate(op, num1, num2);
    return printResult(result);
}









