#include <iostream>
#include <string>

// Create your own namespace, called Person
// store your name as a string
// your age as an integer
// and your favorite number as an integer
// write them out in main()
using namespace std;
namespace Person {

    string name = "Gergely Turcsanyi";
    int age = 34;
    int favourite_number = 7;
}

int main()
{
    using namespace Person;

    cout << name << " is " << age << " years old " << "and his favourite number is: " << favourite_number << "." << endl;

    return 0;
}
