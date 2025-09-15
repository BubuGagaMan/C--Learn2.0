// including all from getgo coz cba to be be specific and idc for small programmes
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main () {

    cout << "Enter a string\n";
    string str = "";
    cin >> str;

    for(int i = 0; i < str.size(); i ++) {
        cout << i << ' ' << str[i] << '\n';
    }
    return 0;
}