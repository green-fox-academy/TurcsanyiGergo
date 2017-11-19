#include <iostream>
using namespace std;

// Write a try - catch block.
// Throw an integer in the try block
// Catch it in the catch block and write it out.

int main() {

    try {
        int LexusPower = 300;
        int VolvoPower = 393;

        if (LexusPower < VolvoPower) {
            throw 99;
        }

    } catch (int x) {
    cout << "Come on, a V8 is a V8, even in hell. ERROR number: " << x << "." << endl;
    }


	return 0;
}
