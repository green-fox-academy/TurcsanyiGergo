#include <iostream>

// Create your own namespace, called Mark
// store your name as a string
// your age as an integer
// and your favourite number as an integer
//
// Create your own namespace, called Maria
// store your name as a string
// your age as an integer
// and your favourite number as an integer
//
// create a function that can add the two age, and returns it

using namespace std;

namespace Mark {

    string name = "Mark";
    int age = 24;
    int favourite_number = 7;
}

namespace Maria {

    string name = "Maria";
    int age = 33;
    int favourite_number = 9;
}

int sum_ages();

int main()
{

    cout << "The sum of " << Mark::name << " and " << Maria::name << " ages is: " << sum_ages() << "." << endl;

    return 0;
}

int sum_ages() {

    int sum = Mark::age + Maria::age;

    return sum;
}
