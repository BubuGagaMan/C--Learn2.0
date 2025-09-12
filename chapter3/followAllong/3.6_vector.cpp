#include <iostream>
#include <vector>
using namespace std;

int main () {
    vector<int> intV = {1,2,3,4,5};

    intV.push_back(888);
    for(int i = 0; i < intV.size(); i++) {
        cout << intV[i] << '\n';
        
    }
    return 0;
}