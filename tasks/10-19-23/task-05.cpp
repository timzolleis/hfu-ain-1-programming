//
// Created by Tim on 19.10.2023.
//

#include <cstdio>
#include <string>

void printSize(const std::string& typeName, long long size) {
    printf("%s: == %llu == \n", typeName.c_str(), size);
}

void printDataTypeSize() {
    int i;
    printSize("int", sizeof(i));
    short s;
    printSize("short", sizeof(s));
    char c;
    printSize("char", sizeof(c));
    long l;
    printSize("long", sizeof(l));
    long long ll;
    printSize("long long", sizeof(ll));
    float f;
    printSize("float", sizeof(f));
    double d;
    printSize("double", sizeof(d));
    long double ld;
    printSize("long double", sizeof(ld));
    bool b;
    printSize("bool", sizeof(b));
}

int main() {
    printDataTypeSize();
    return 0;
}