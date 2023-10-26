//
// Created by Tim on 19.10.2023.
//
#include <cstdio>

int main() {
    int x, y;
    printf("\n Some arithmetic ... \n\n");
    printf("\t enter the first number:");
    scanf("%i", &x);
    printf("\t enter the second number: ");
    scanf("%i", &y);
    printf("\n");

    printf("\t %i + %i is %i\n", x, y, x + y);
    printf("\t %i - %i is %i\n", x, y, x - y);
    printf("\t %i * %i is %i\n", x, y, x * y);
    printf("\t %i / %i is %i\n", x, y, x / y);
    printf("\t %i %% %i is %i\n", x, y, x % y);
    return 0;
}