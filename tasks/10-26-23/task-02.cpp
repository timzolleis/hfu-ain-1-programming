//
// Created by Tim on 01.11.2023.
//
#include <bitset>
#include <string>
#include <cstdio>


void printBinaryNumber(int numberToPrint) {
    const int bitLength = 8;
    std::string k = std::bitset<bitLength>(numberToPrint).to_string();
    printf("%i in binary: %.10s", numberToPrint, k.c_str());
}

bool isEven(int number) {
    return number % 2 == 0;
}


void printBinaryNumberTheOldWay(int numberToPrint) {
    int current = numberToPrint;
    int list[8];
    //Print it in an 8-way binary number
    list[7] = isEven(current) ? 0 : 1;
    current = current / 2;
    list[6] = isEven(current) ? 0 : 1;
    current = current / 2;
    list[5] = isEven(current) ? 0 : 1;
    current = current / 2;
    list[4] = isEven(current) ? 0 : 1;
    current = current / 2;
    list[3] = isEven(current) ? 0 : 1;
    current = current / 2;
    list[2] = isEven(current) ? 0 : 1;
    current = current / 2;
    list[1] = isEven(current) ? 0 : 1;
    current = current / 2;
    list[0] = isEven(current) ? 0 : 1;

    //We are allowed to use a loop to print it right?!
    printf("\n%i in binary (the manual way): ", numberToPrint);
    for (int i: list) {
        printf("%i", i);
    }
}


int main() {
    int numberToConvert = 225;
    printBinaryNumber(numberToConvert);
    printf("\n");
    printBinaryNumberTheOldWay(numberToConvert);
    return 0;
}