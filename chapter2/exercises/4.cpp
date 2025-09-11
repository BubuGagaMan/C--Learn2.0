#include <iostream>
using namespace std;

int main () {

    cout << "This programme accepts 2 integer values and calculates their difference, product and ratio.\n";

    int val1 = 0;
    cout << "Enter value1:\n";
    cin >> val1;

    int val2 = 0;
    cout << "Enter value2:\n";
    cin >> val2;

    int product = val1 * val2;
    double ratio_val1_val2 = (double)val2 / val1;
    int difference = val1 - val2;

    cout << "Difference of value1 to value 2 == " << difference
        << "\nRatio value1:value2 == " << "1 : " << ratio_val1_val2
        << "\nProduct == " << product
        << '\n';

    return 0;
}