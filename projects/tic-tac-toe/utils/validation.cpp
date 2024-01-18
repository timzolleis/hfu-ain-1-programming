//
// Created by Tim Zolleis on 16.01.24.
//

#include "validation.h"

bool isValidCharacter(char input){
    char validCharacters[] = {'A', 'B', 'C'};
    for (char character : validCharacters){
        if (character == input){
            return true;
        }
    }
    return false;
}

bool isValidNumber( int input){
    int validNumbers[] = {1, 2, 3};
    for (int validNumber : validNumbers) {
        if (validNumber == input){
            return true;
        }
    }
    return false;
}

int convertCharacterToNumber(char character){
    switch (character) {
        case 'A': {
            return 1;
        }
        case 'B': {
            return 2;
        }
        case 'C': {
            return 3;
        }
    }
    return 0;
}