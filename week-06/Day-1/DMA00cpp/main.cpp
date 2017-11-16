#include <iostream>

using namespace std;

// store your personal data in Variables
// string name, int age, int slice_of_pizza_you_can_eat
// allocate memory dynamically for these variables
// create a sentence using these variables
// free the allocated memory

int main() {

    string *name = NULL;
    int *age = NULL;
    int *slice_of_pizza_you_can_eat = NULL;

    name = new string;
    age = new int;
    slice_of_pizza_you_can_eat = new int;

    *name = "Gergo";
    *age = 34;
    *slice_of_pizza_you_can_eat = 4;

    cout << "My name is " << *name << " and I can eat " << *slice_of_pizza_you_can_eat << " slice of pizza. " << endl;

    delete name;
    delete age;
    delete slice_of_pizza_you_can_eat;

    return 0;
}
