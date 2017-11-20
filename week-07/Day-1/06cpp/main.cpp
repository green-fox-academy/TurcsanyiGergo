#include <iostream>
#include <stdexcept>

using namespace std;

// Create a function which throws a built-in exception
// In the main(), put that function in a try block
// Also in the main() catch, what your function throws

void Throwtheinteger(int num1, int num2);

int main() {

    try {

    int num1 = 6;
    int num2 = 2;

    Throwtheinteger(num1, num2);

    }
    catch (runtime_error &err)  {
        cout << err.what() << endl;
    }
	return 0;
}

void Throwtheinteger(int num1, int num2) {

    if (num2 == 0){
        throw runtime_error ("You cannot divide by 0!");
    }
        cout << num1/num2 << endl;
}
