// including all from getgo coz cba to be be specific and idc for small programmes
#include <iostream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;



int main () {

    vector<int> someInts = {1, 5, 8, 4, 6};

    cout << "Make arr even? Enter 'y' if yes\n";
    char yORn = ' ';
    cin >> yORn;
    if(yORn == 'y') {
        someInts.push_back(3);
    }
    
    for(int i = 0; i < someInts.size(); i++) {
        for(int j = 0; j < someInts.size(); j++) {
            if(someInts[i] < someInts[j]) {
                int temp = someInts[i];
                someInts[i] = someInts[j];
                someInts[j] = temp;
            }
        }
    }
    double median = 0;

    int oddMedianIndex = someInts.size() / 2;

    if(someInts.size() % 2 != 0) {

        median = someInts[oddMedianIndex];
    }else{
        median = (someInts[oddMedianIndex] +  (double)someInts[oddMedianIndex - 1 ]) / 2;
    }
    cout << "\nNumbers: \n";
    for(int i = 0; i < someInts.size(); i++) {
        cout << someInts[i] << ", ";
    }
    cout << "\nMedian = " << median << '\n';

    return 0;
}