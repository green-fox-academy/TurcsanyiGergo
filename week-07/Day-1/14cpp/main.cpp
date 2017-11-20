#include <iostream>
#include <ctime>
#include <windows.h>

using namespace std;

// Create a class named Person.
// This class should have a constructor which prints out the
// date of the creation of the instance.

class Person {
public:
    Person() {
     time_t now = time(0);
        char *dt = ctime(&now);
        cout << "The current date and time is: " << dt;
    }
};

int main() {

    Person p = Person();

    return 0;
}
