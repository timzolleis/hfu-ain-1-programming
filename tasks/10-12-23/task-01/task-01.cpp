//
// Created by Tim on 12.10.2023.
//

#include <cstdio>
#include <cstdlib>
#include <algorithm>

//Helper function to print the list
void printList(int list[], int arrayLength) {
    int i;
    for (i = 0; i < arrayLength; i++) {
        printf("\n- %i", list[i]);
    }
}

//Helper function to print a line break, just for the lolz
void printLineBreak() {
    printf("\n");
}

//Main function to run the program
int main(int argc, char *argv[]) {

    int arrayLength = 40;
    int list[arrayLength];
    int minimum;
    int maximum;
    int i;
    unsigned long long sizeOfList = sizeof(list) / list[0];



    //Fill the list with 20 random elements
    for (i = 0; i < arrayLength; i++) {
        list[i] = rand();
    }
    //Set the minimum and maximum to be the first entry of the list
    minimum = list[0];
    maximum = list[0];
    //Iterate through the list and check if the current element is smaller than the minimum
    for (i = 1; i < arrayLength; i++) {
        if (list[i] < minimum) {
            minimum = list[i];
        }
    }
    //Iterate through the list and check if the current element is bigger than the maximum
    for (i = 1; i < arrayLength; i++) {
        if (list[i] > maximum) {
            maximum = list[i];
        }
    }

    //Sort the list to make it easier to read
    std::sort(list, list + arrayLength);
    //Print the minimum and the list
    printf("The minimum of the list ");
    printList(list, arrayLength);
    printLineBreak();
    printf("===== %i =====", minimum);
    printLineBreak();
    //Print the maximum and the list
    printf("The maximum of the list ");
    printList(list, arrayLength);
    printLineBreak();
    printf("===== %i =====", maximum);
    printLineBreak();
    printf("non existing index");
    //Print the 55th element of the list
    printLineBreak();
    printf("===== %d =====", list[54]);

    return 0;
}

