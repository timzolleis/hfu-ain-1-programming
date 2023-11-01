//
// Created by Tim on 01.11.2023.
//

#include <cstdio>
#include <cmath>

bool isSolvable(double result) {
    return result >= 0;
}

double getExpressionUnderSqrt(double p, double q) {
    return pow((p / 2), 2) - q;
}

bool isZeroPoint(double x, double p, double q) {
    return pow(x, 2) + (p * x) + q == 0;
}


int main() {
    double p;
    double q;
    printf("Enter a number for p...\n");
    scanf("%lf", &p);
    printf("Enter a number for q...\n");
    scanf("%lf", &q);
    double expressionUnderSqrt = getExpressionUnderSqrt(p, q);
    if (!isSolvable(expressionUnderSqrt)) {
        printf("The equation is not solvable");
        return 0;
    }
    double solutionA = -(p / 2) + sqrt(expressionUnderSqrt);
    double solutionB = -(p / 2) - sqrt(expressionUnderSqrt);
    printf("The solutions are: %lf and %lf", solutionA, solutionB);

    // Check if it is a zero point
    if (isZeroPoint(solutionA, p, q)) {
        printf("The solution %lf is a zero point", solutionA);
    }
    if (isZeroPoint(solutionB, p, q)) {
        printf("The solution %lf is a zero point", solutionB);
    } else {
        printf("\n The solutions are not zero points");
    }
    return 0;

}






