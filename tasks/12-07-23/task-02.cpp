//
// Created by TimZolleis on 06.12.2023.
//
#include <cstdlib>
#include <cstdio>
#include "time.h"
#include "types/point.hpp"


int main() {
    Punkt elements[50];
    srand(time(nullptr));
    for (int i = 0; i < 50; ++i) {
        int x = rand();
        int y = rand();
        elements[i] = {x, y};
    }
    //Find the smallest x and y unites
    int minx = elements[0].x;
    int miny = elements[0].y;
    int posX = 0;
    int posY = 0;



    for (int i = 0; i < 50; ++i) {
        Punkt punkt = elements[i];
        if (punkt.x < minx) {
            minx = punkt.x;
            posX = i;
        }
        if (punkt.y < miny) {
            miny = punkt.y;
            posY = i;
        }
    }
    printf("Smallest x: %i at position %i, smallest y: %i at position %i", minx, posX, miny, posY);
}