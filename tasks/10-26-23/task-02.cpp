//
// Created by Tim on 01.11.2023.
//
#include <bitset>
#include <string>
#include <cstdio>


void printBinaryNumber() {
    int i;
    const int b = 8;
    i = 200;
    std::string k = std::bitset<b>(i).to_string();
    printf("%i in binary: %.10s", i, k.c_str());
}

int main() {
    printBinaryNumber();
    return 0;
}