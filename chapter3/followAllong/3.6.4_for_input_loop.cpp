#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main () {
    vector<string> stringV;

    for(string temporaryString; cin >> temporaryString;) {
        stringV.push_back(temporaryString);
        cout << temporaryString << " added to list\n";

        cout << "Current list: \n";
        for (int i = 0; i < stringV.size(); i ++) {
            cout << stringV[i] << '\n';
        }
    }

    
    return 0;
}