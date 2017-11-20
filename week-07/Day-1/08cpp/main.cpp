#include <iostream>

using namespace std;

/* Write a function which is called "get_fibonacci_number". It returns the "N"th
 * Fibonacci number, where "N" is received as a parameter.
 * For example:
 *  - get_fibonacci_number(1) returns 0
 *  - get_fibonacci_number(2) returns 1
 *  - get_fibonacci_number(3) returns 1
 *  - get_fibonacci_number(4) returns 2
 *  - get_fibonacci_number(5) returns 3
 *  - get_fibonacci_number(6) returns 5
 *
 *  If the function gets invalid parameter
 *  Negative numbers are invalid parameters.
 *  It should throw an exception
 */

int get_fibonacci_number(int n);

int main()
{
    try {
    cout << get_fibonacci_number(9) << endl;;
    }
    catch (int x) {
        cout << "You cannot use negative numbers here!" << endl;
    }

    return 0;
}

int get_fibonacci_number(int n)
{
    if (n < 0)
    {
        throw -1;
    }
    else
    {
        if (n == 0)
        {
            return 0;
        }
        else if (n == 1)
        {
            return 1;
        }
        else if (n == 2)
        {
            return 1;
        }
        else
        {
            int a = 0;
            int b = 1;
            int c = 0;
            int counter = 0;

            while (counter != n - 1)
            {
                a = b;
                b = c;
                c = a + b;
                counter++;
            }

        return c;
        }
    }

}
