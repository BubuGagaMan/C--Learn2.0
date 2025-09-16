#include <iostream>
using namespace std;

int testCompilerError(int arg1, int arg2 = 0) {
    cout << arg1 << ' ' << arg2;
    return 0;
};
int testCompilerError_TWO(int arg1, int arg2) {
    cout << arg1 << ' ' ;
    return 0;
};

int main () {

    

    testCompilerError(1);
    testCompilerError_TWO(1);

    
    return 0;
}