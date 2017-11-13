#include <iostream>

// Use your costume namespace from the last exercise
// Create a function, which takes the age as a parameter
// and returns the year when you were born


using namespace std;
namespace Person {

    string name = "Gergely Turcsanyi";
    int age = 35;

    int find_birth_year(int age) {

    int current_year = 2017;


    return current_year - age;

}
}

int main()
{
    using namespace Person;

    cout << name << " birth year is " << find_birth_year(age) << "." << endl;

    return 0;
}

