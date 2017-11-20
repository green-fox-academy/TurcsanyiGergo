#include <iostream>

using namespace std;

/**
 * Create a function that prints out the first "N" positive odd numbers.
 * It should take the "N" number as a parameter, and print the output to the console.
 *
 * The output should look like this for 5 as parameter:
 *   1, 3, 5, 7, 9
 *
 * Non-positive "N" numbers should be treated as errors, handle it!
 */

void print_odd_num(int user_parameter)
{

    int i = 0;
    int counter = 0;

    if (user_parameter < 0)
    {
        throw 'Y';
    }
    else
    {
        cout << "The first " << user_parameter << " odd numbers are: ";
        while (counter != user_parameter)
        {
            i++;
            if (i % 2 != 0)
            {
                cout << i << (counter == user_parameter - 1 ? "." : ", ");
                counter++;

            }
        }
        cout << endl;
    }
}

int main()
{
    try {
    print_odd_num(5);
    }
    catch (char x) {
        cout << "You cannot use negative numbers here!" << endl;
    }

    return 0;
}
