//
// Created by Tim on 26.10.2023.
//


void conversions() {
    int i;
    long ell;
    float f;
    double d;


    d = 100 / 3;
    f = d; // 33
    ell = f; // 33
    i = ell; //33
    d = 100 / 3.0;
    f = d; // 100 thirds as a float
    ell = f; //100 thirds as a long
    i = ell; // 33
    d = (float) 100 / 3; // 100 thirds as a float
    f = d; // 100 thirds as a float
    ell = f; // 100 thirds as a long
    i = ell; //33
    d = 0.1; // 100 thirds as a double
    f = d; // 100 thirds as a float
    ell = f; //33
    i = ell; //33

}

int main() {
    conversions();
    return 0;
}