#include <iostream>
using namespace std;

int main () {

    constexpr double pi = 3.14159;

    double diameter = 0;
    cout << "This program calculates the circumference of a circle, given a diameter."
        << "\nPlease enter the diameter of your circle:\n";

    cin >> diameter;

    cout << "Cicumference == " << pi * diameter << '\n';
    return 0;
}