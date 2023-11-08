//
// Created by Tim on 08.11.2023.
//

#include <cstdio>
#include <string>
#include <algorithm>

bool isEven(int number) {
    return number % 2 == 0;
}

std::string getOneOrZero(int number) {
    return isEven(number) ? "0" : "1";
}

std::string getBinaryNumber(int number) {
    int numberSize = 8;
    int current = number;
    std::string binary;
    for (int i = 0; i < numberSize; ++i) {
        binary += getOneOrZero(current);
        current = current / 2;
    }
    return binary;
}

int getInput() {
    int input;
    printf("Enter a number...\n");
    scanf("%i", &input);
    return input;
}


int main() {
    char command = 'y';
    while (command == 'y') {
        int input = getInput();
        while (input < 0) {
            printf("ERR: This function does not accept negative numbers. \n");
            input = getInput();
        }
        std::string binary = getBinaryNumber(input);
        std::string reversed = binary;
        std::reverse(reversed.begin(), reversed.end());
        printf("The reversed binary representation of %i is %s (or %s in the correct order)", input, binary.c_str(),
               reversed.c_str());

        printf("\nDo you want to continue? (y/n)\n");
        scanf(" %c", &command);
    }
    printf("Exiting...");
    return 0;
}






