//
// Created by Tim on 08.11.2023.
//
#include <cstdio>


int main() {
    printf("==== LOOP 1 ====\n");
    // This loop will run 10 times
    for (int count = 0; count != 10; count = count + 1) {
        printf("%i\n", count);
    }
    printf("==== LOOP 2 ====\n");
    //This loop is the reverse of the one above, so also 10 times
    for (int count = 10; count > 0; count = count - 1) {
        printf("%i\n", count);
    }
//    printf("==== LOOP 3 ====\n");
//    //This loop will run 5 times
//    for (int count = 1; count <= 15; count = count + 3) {
//        printf("%i\n", count);
//    }
//    printf("==== LOOP 4 ====\n");
//    //This loop will run forever (since it will be 13 -> 16 and then never touch 15)
//    for (int count = 1; count != 15; count = count + 3) {
//        printf("%i\n", count);
//    }
//    printf("==== LOOP 5 ====\n");
//    //This will never, since it will never be 15
//    for (int count = 1; count == 15; count = count + 3) {
//        printf("%i\n", count);
//    }
    printf("==== LOOP 6 ====\n");
    //This loop will run 3 times (5, 7, 9)
    for (char c = '5'; c <= '9'; c = c + 2) {
        printf("%c\n", c);
    }
}