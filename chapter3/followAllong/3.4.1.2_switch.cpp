#include <iostream>
using namespace std;

int main () {

    int someInt = 0;
    cin >> someInt;
    switch(someInt) {
        case 1:
            cout << "You entered 1.\n";
            // lack of breaks will lead to executing further statements - until a break or end of switch
            break;
        case 2: 
            cout << "You entered 2.\n";
            break;
        case 3:
            cout << "You entered 3.\n";
            break;
        default:
            cout << "You entered something other than 1, 2 or 3.\n";
            break;
    }
    return 0;
}