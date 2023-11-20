//
// Created by Tim on 20.11.2023.
//
#include <cstdio>


int main() {
    int n = 5;
    int m = 10;
    int y;

    int *pn = &n;
    int *pm = &m;
    int *py = &y;

    printf("Assigned variables --- n: %i, m: %i\n", n, m);

    //Now we switch them up
    *py = *pn;
    *pn = *pm;
    *pm = *py;
    printf("Switched variables --- n: %i, m: %i\n", n, m);

    return 0;
}