//
// Created by Tim on 08.11.2023.
//
#include <time.h>
#include <cstdio>
#include <cstdlib>


void fillWithRandomNumbers(int *array, int length) {
    srand(time(0));
    for (int i = 0; i < length; ++i) {
        array[i] = rand();
    }
}

//TODO: Is this right?
int main() {
    int length = 100;
    int array[length];
    fillWithRandomNumbers(array, 100);
    //Now we want to fill for each index, how often that number occurs in the array
    for (int i = 50; i < 100; i++) {
        //Count the number of occurences in the first array
        int occurrences = 0;
        for (int j = 0; j < 50; j++) {
            if (array[j] == j) {
                occurrences++;
            }
        }
        array[i] = occurrences;
    }
    //Print the numbers side by side
    for(int i = 0; i < 50; i++){
        printf("Number: %i | Occurrences: %i\n", array[i], array[i + 50]);
    }


}

