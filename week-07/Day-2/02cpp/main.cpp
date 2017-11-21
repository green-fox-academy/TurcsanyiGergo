#include <iostream>

using namespace std;

// Create 3 functions: each should take respectively 2, 3 and 4 strings.
// Each should return a string that contains all the input string concatenated.
// (Combined into one in a linear order.)
// Write code that showcases how this works and prints out the result of the function.

string stringFunction(string a, string b);
string stringFunction(string a, string b, string c);
string stringFunction(string a, string b, string c, string d);


int main() {

    cout << stringFunction("Hello", " Gergo") << endl;
    cout << stringFunction("Hello", " Gergo", " how ") << endl;
    cout << stringFunction("Hello", " Gergo", " how ", "you") << endl;

	return 0;
}

string stringFunction(string a, string b) {

    return a + b;
}

string stringFunction(string a, string b, string c) {

    return a + b + c;
}

string stringFunction(string a, string b, string c, string d) {

    return a + b + c + d;
}
