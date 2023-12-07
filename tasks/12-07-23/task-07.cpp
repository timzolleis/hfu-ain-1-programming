//
// Created by TimZolleis on 06.12.2023.
//

#include <cstdio>

int main() {
    int digits[5];
    int i, j;
    for (i = 20; i > 15; i = i - 1) {
        digits[20 - i] = i % 3;
        // 20 mod 3 = 2;
        //19 mod 3 = 1;
        //18 mod 3 = 0;
        //17 mod 3 = 2;
        //16 mod 3 = 1;
    }
    for (i = 0; i < 5; i++) {
        for (j = 5; j > 0; j = j - 2) {
            digits[5 - j] = digits[i / 2] + digits[j - 1];
            printf("digits[i/2] %i\n", digits[i / 2]);
            printf("digits[j-1], %i\n", digits[j - 1]);
            printf("result: %i\n", digits[5 - j]);
        }
        // 2 + 1 = 3 --> 3 1 3 2 6
        //
    }
}

