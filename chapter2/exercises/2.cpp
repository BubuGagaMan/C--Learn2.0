#include <iostream>
using namespace std;

int main () {

    double miles = 0;

    cout << "Enter miles value to be converted to km:\n";

    cin >> miles;

    cout << miles << " miles == " << miles / 1.609 << " km\n";

    return 0;
}