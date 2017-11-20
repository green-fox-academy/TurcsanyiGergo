#include <iostream>

using namespace std;

// Write a try - catch block.
// Throws a built-in exception in the try block
// Catch it in the catch block and write it out.
// Don't forget includes

int main() {

    try{

    int num1 = 4;
    int num2 = 0;

    if (num2 == 0)
        throw 0;

    cout << num1/num2 << endl;
    }
    catch (int x) {
    cout << "You cannot divide by " << x << "." << endl;
    }
	return 0;
}
