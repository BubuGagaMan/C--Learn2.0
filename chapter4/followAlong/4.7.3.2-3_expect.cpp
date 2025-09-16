#include <iostream>
using namespace std;

void expect(bool test, string errorMessage ) {
    if(!test) {
        throw runtime_error{errorMessage};
    }
}

// example function for calculating area
int calculateArea(int length, int width) {
    // test pre-conditions
    // could resructue code to have a lambda function instead of a bool here
    expect(length < 0 && width < 0, "Length, width or both are not positive integers");
    int area = length * width;
    // test post-conditions
    expect(area < 0, "Bad area() result");
    return length * width;
};


int main () {

    try {
        cout << calculateArea(-1,2);
    } catch (exception& e) {
        cerr << e.what();
        return 1;
    }

    return 0;
}