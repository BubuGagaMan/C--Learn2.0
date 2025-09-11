#include <iostream>

int main () {
    char c = 'a';

    int i1 = c;
    int i2 = c+ 100;

    double d = i2 + 1.1;

    std::cout << "c == " << c
            << "\ni1 == " << i1
            << "\ni2 == " << i2
            << "\nd == " << d
            << "\n";
            

    // narrowing conversions

    int x = 7.8; // narrows, some compilers warn
    // int x1 {7.8}; // not narrowed and error thrown
    // int x2 = {7.8}; // same as above
    int x3 (7.8); // narrows - some compilers warn

    std::cout << x
        // << x1
        // << x2
        << x3;
    return 0;
}