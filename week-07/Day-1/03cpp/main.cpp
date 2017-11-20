#include <iostream>
#include <stdexcept>

using namespace std;

// Write a try - catch block.
// Throws a built-in exception in the try block
// Catch it in the catch block and write it out.
// Don't forget includes

int main() {

try{

    int num1 = 4;
    int num2 = 0;

    if (num2 == 0) {
        throw runtime_error ("You cannot divide by 0!");
        cout << num1/num2 << endl;
    }
    }
    catch (runtime_error &err)  {
        cout << err.what() << endl;
    }


	return 0;
}
