#include <iostream>
using namespace std;

void error(string s) {
    throw runtime_error{s};
}

int main () {



    try{ 
        int intInput = 0;
        cin >> intInput;
        if(cin) {
            cout << "Successful input";
        }else {
            error("Wtf bro");
        }
        return 0;
    }
    // catch (out_of_range){
    //     cerr << "OUT OF RANGE!";
    //     return 1;
    // }
    // catch (runtime_error& e){
    //     cerr << "Runtime error: " << e.what() << '\n';
    //     return 1;
    // }
    // runtime_error and out of range are both exceptions
    catch (exception& e){
        cerr << "Some exception error: " << e.what() << '\n';
        return 1;
    }

    
    return 0;
}