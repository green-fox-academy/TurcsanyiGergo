#include <iostream>
using namespace std;

// Write a try - catch block.
// Throw an char in the try block
// Catch it in the catch block and write it out.

int main() {
    char Y;
    try {
        int LexusPower = 300;
        int VolvoPower = 393;

        if (LexusPower < VolvoPower) {
            throw "Fuck";
        }

    } catch (char const* Y) {
    cout << "Come on, a V8 is a V8, even in hell. ERROR: " << Y << "." << endl;
    }


	return 0;
}
