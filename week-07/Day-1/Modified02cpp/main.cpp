#include <iostream>
using namespace std;

// Write a try - catch block.
// Throw an char in the try block
// Catch it in the catch block and write it out.

int main() {

try{

    int num1 = 4;
    int num2 = 0;

    if (num2 == 0)
        throw "F";

    cout << num1/num2 << endl;
    }
    catch (char const* Y) {
    cout << "You cannot divide by " << Y << "." << endl;
    }

	return 0;
}
