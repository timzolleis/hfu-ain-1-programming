//
// Created by TimZolleis on 06.12.2023.
//
#include <cstdio>

struct Vector {
    float x;
    float y;
};


float getScalar(const Vector &vectorA, const Vector &vectorB) {
    return (vectorA.x * vectorB.x) + (vectorA.y * vectorB.y);
}

Vector getSum(const Vector &vectorA, const Vector &vectorB) {
    return {vectorA.x + vectorB.x, vectorA.y + vectorB.y};
}

Vector getCross(const Vector &vectorA, const Vector &vectorB) {
    return {vectorA.x * vectorB.y, vectorA.y * vectorB.x};
}

Vector getScaled(const Vector &a, float number) {
    return {number * a.x, number * a.y};
}


int main() {
    Vector vectorA = {10, 20};
    Vector vectorB = {100, 10.5};

    float scalar = getScalar(vectorA, vectorB);
    Vector cross = getCross(vectorA, vectorB);
    Vector scaled = getScaled(vectorA, 10);

    printf("Your scalar: %f\n", scalar);
    printf("Your cross product: %f - %f\n", cross.x, cross.y);
    printf("Your scaled vector: %f - %f\n", scaled.x, scaled.y);

}