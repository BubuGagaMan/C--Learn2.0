#include <iostream>

using namespace std;

int main () {

    string a = "aab";
    string a2 = "aac";
    string b = "bb";
    string c = "cc";

    cout << (a < a2)
        << (a2 < b)
        << (b < c);


    return 0;
}