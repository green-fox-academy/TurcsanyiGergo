#include <iostream>

using namespace std;
//Try to run the following code!

int main () {

    int int_array[5] = {1, 2, 3, 4, 5};
    int n = 3;

    try{
    int len = sizeof int_array / sizeof int_array[0];
        if (n >= len)
            throw 0;

    cout << int_array[n] << endl;
    }
    catch (int x) {
        cout << "Your request is out of range." << endl;
    }

    return 0;
}

//The program should compile but crash!
//Create a solution for this problem using try-catch block!
