#include <iostream>
#include <ctime>
#include <stdexcept>

using namespace std;

// Create a simple program which has a time lock
// The program should ask for a user input, but the user only has
// 10 seconds to reply, if the user fails (reaches the time limit)
// the program should print out: "failed, it took you too much time"
// This program could be the engine of a quiz game.

int main()
{
    try{
    clock_t endwait;
    endwait = 10000;
    cout << "Please enter the input: ";

    while (clock() < endwait) {

    }
    cout << endl;

    if (endwait >= 10000) {
        throw runtime_error("Failed, it took you too much time, loser!");
    }
    }
    catch (runtime_error &err) {
        cout << err.what() << endl;
    }

    return 0;
}

