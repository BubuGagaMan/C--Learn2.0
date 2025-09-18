// looking at references with the & syntax
// looking at simple getter and setters from a vector of items (Variable - in this case)

#include <iostream>
#include <string>
#include<vector>
using namespace std;

class Variable {
    public:
        Variable(string name, double value);
        string name;
        double value;
};

Variable::Variable(string name, double value) 
    :name(name), value(value) {};

double get_variable_value(string s, vector<Variable> variable_table) {
    for (const Variable& v : variable_table) { // Variable& v => the & makes v is a ref, rather than a copy -- see set variable value
        if(v.name == s) {
            return v.value;
        }
    }
    cerr << "Trying to read undefined variable: " << ' ' << s;
}
// likewise... the & is essential for the variable table - otherwise, it will chagne the value of a copy of the variable table
// do note, this needs to be the case, only if you intend to mutate the vector that is passed in
// however, using a reference - the exact variable passed in, as opposed to not, is actually also more 
// efficient as you would not be creating a new copy
void set_variable_value(string s, double d, vector<Variable>& variable_table) 
// set the Var iable named s to d
{
    // Variable& v => Here this is essential, the value of the exact v needs to be changed, instead of a copy of it (which would be useless)
    for (Variable& v : variable_table) {
        if (v.name == s) {
            v.value = d;
            return;
        }
    }
    cerr << "Trying to read undefined variable: " << ' ' << s;
}

int main () {
    // creating a vector with some variables
    vector<Variable> var_vector = { Variable ("1", 1), { "2", 2 }, Variable ("3", 3) }; // showcasing multiple syntaxes...
    
    cout << "VALUE PRE-CHANGE: " << get_variable_value("2", var_vector) << '\n';

    set_variable_value("2", 2.22, var_vector); // change the value
    cout << "VALUE POST-CHANGE: " << get_variable_value("2", var_vector) << '\n';

    return 0;
}