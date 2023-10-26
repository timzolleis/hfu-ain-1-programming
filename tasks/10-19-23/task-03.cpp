//
// Created by Tim on 26.10.2023.
//


void conversions() {
    int i;
    long ell;
    float f;
    double d;


    d = 100 / 30;
    f = d; // 3
    ell = f; // 3
    i = ell; //3
    d = 100 / 3.0;
    f = d; // one third as a float
    ell = f; //one third as a long
    i = ell; // 33
    d = (float) 100 / 3; // one third as a float
    f = d; // one third as a float
    ell = f; // one third as a long
    i = ell; //33
    d = 0.1; // one tenth as a double
    f = d; // one tenth as a float
    ell = f; //33
    i = ell; //33

}

int main() {
    conversions();
    return 0;
}