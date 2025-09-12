// super small program, using boilerplate from copy - paste
// cba to be specific and onyl include necessary libs 
// so getting all the ones which would be needed idc
#include<iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    cout << "This programme reads in two ints and then reads them out\n";

    double i = 0;
    double smallest = i;
    double largest = i;

    vector<int> allEntries = {};

    while(cin >> i) {
        cout << "\ncurrent integer == " << i << '\n';
        if(i > largest) {
            largest = i;
            cout << "\nlargest integer so far == " << largest << '\n';
        }

        if(i < smallest) {
            smallest = i;
            cout << "\nsmallest integer so far == " << smallest << '\n';
        }

        allEntries.push_back(i);
    }

    for(int i = 0; i < allEntries.size(); i++) {
        cout << i;
        for(int j = 0; j < allEntries.size(); j++) {
            cout << j;
            if(allEntries[i] < allEntries[j]) {
                int temp = allEntries[i];
                allEntries[i] = allEntries[j];
                allEntries[j] = temp;
            }
        }
    }

    cout << "All entries: \n";
    for(int i = 0; i < allEntries.size(); i++) {
        cout << allEntries[i] << ", ";
    }
    cout << '\n';
    return 0;
}