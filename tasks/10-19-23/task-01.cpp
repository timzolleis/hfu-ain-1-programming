//
// Created by Tim on 19.10.2023.
//
#include <cstdio>

void printInteger(int value) {
    printf("the int is now %i \n", value);
}

void printFloat(float value) {
    printf("the float is now %f \n", value);
}

void printChar(char value) {
    printf("the char is now %c \n", value);
}

void printBool(bool value) {
    printf("the boolean is now %b \n", value);
}

void integers() {
    int n;
    n = 17 - 2 * 7 + 9 % 6;
    printInteger(n);
    n = (17 - 2) * (7 + 9) % 6;
    printInteger(n);
    n = (17 - 2) * ((7 + 9) % 6);
    printInteger(n);
    n = 17 - (2 * (7 + (9 % 6)));
    printInteger(n);
    n = 17 / (5 / 3) * 4;
    printInteger(n);
    n = (17 / 5) * (5 / 17);
    printInteger(n);
}

void floats() {
    float f;
    f = 17.0 / (5 / 3) * 4;
    printFloat(f);
    f = (17.0 / 5) * (5 / 17);
    printFloat(f);
    f = 1 * (1.0 / 3) * 3;
    printFloat(f);
    f = 1.5e2 * 1.5e2;
    printFloat(f);
    f = 1.5e2 * 1.5e-2;
    printFloat(f);
    f = 1.5e-2 * 1.5e-2;
    printFloat(f);
}

void chars() {
    char c;
    c = 'a' + 5;
    printChar(c);
    c = '0' + 9;
    printChar(c);
    c = '0' + 9 / 2;
    printChar(c);
    c = '0' + 9 - 2;
    printChar(c);
    c = '0' + '9';
    printChar(c);
}

void booleans() {
    char c;
    bool b;
    c = '5';
    b = (c >= '0' && c <= '9');
    printBool(b);
    b = (c >= '0' && c <= 9);
    printBool(b);
    b = (c >= '0' || c <= '9');
    printBool(b);
    b = (c >= 0 || c <= 9);
    printBool(b);
}

void shifts() {
    int m = 44;
    m = 44 >> 2;
    printInteger(m);
    m = 44 << 1;
    printInteger(m);
    m = 1 << 10;
    printInteger(m);
    m = 1 << 32;
    printInteger(m);
}


int main(int argc, char *argv[]) {
    //Print all integers
    integers();
    // Print all floats
    floats();
    // Print all characters
    chars();
    // Print all booleans
    booleans();
    //Shift numbers
    shifts();
}