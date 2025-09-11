#include <iostream>
#include<math.h>
using namespace std;
int main () {

    double n_double = 0;

    cout << "Enter a double\n";
    cin >> n_double;

    int n_int = 0;
    cout << "Enter an int\n";
    cin >> n_int;

    cout << "your double (YD) == " <<  n_double
        << "\nYD + 1 == " << n_double + 1
        << "\nYD * 3 == " << n_double * 3
        << "\nYD / 2 == " << n_double / 2
        << "\nYD square root == " << sqrt(n_double)
        << "\nYD % 2 == " << "doubles cannot be %'d?"
        << "\n";

    cout << "your int (YI) == " <<  n_int
        << "\nYI + 1 == " << n_int + 1
        << "\nYI * 3 == " << n_int * 3
        << "\nYI / 2 == " << n_int / 2
        << "\nYI square root == " << sqrt(n_int)
        << "\nYI % 2 == " << n_int % 2
        << "\n";


    return 0;
}