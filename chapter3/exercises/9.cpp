// including all from getgo coz cba to be be specific and idc for small programmes
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main () {
    double riceGrainsSum = 0;
    int riceGrainsOnTurn = 2;

    for(int i = 1; i < 65; i++) {
        riceGrainsSum += riceGrainsOnTurn;
        cout << "At " << i << " square(s) " << ", there are " << riceGrainsSum << " rice grains \n";
        if(riceGrainsSum > 1000 && riceGrainsSum < 1000000) {
            cout << "This square led to 1,000 or more rice grains! ";
        }
        if(riceGrainsSum > 1000000 && riceGrainsSum < 1000000000) {
            cout << "This square led to 1,000, 000 or more rice grains! ";
        }
        if(riceGrainsSum > 1000000000) {
            cout << "This square led to 1,000,000, 000 or more rice grains! ";
            return 0;
        }
        riceGrainsOnTurn *= 2;

        cout << "\nRice grains next turn: " << riceGrainsOnTurn << "\n \n";
    }

    return 0;
}