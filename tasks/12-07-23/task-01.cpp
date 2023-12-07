
//
// Created by TimZolleis on 06.12.2023.
//
#include "types/point.hpp"

int main() {
    Punkt p1 = {1, 2};
    Punkt p2 = {2, 10};
    int sumX = p1.x + p2.x;
    int sumY = p1.x + p2.y;
    Punkt p3 = {sumX, sumY};
}
