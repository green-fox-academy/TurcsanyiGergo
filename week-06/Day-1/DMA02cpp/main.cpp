#include <iostream>

using namespace std;

/**
 * Please create a program that asks for a count when it starts.
 * It should ask for a number count times, then it should print the average of the numbers.
 * It should delete any dynamically allocated resource before the program exits.
 */

int main() {

    int count = 0;
    float avg = 0;
    int sum = 0;

    cout << "How many numbers do you want to enter?" << endl;
    cin >> count;

    cout << endl;

    int *array = new int [count]();

    for(int i = 0; i < count; i++) {
        cout << "Number" << i + 1 << ": ";
        cin >> array[i];

    sum = sum + array[i];
    }

    avg = (float)sum / count;

    cout << endl;

    cout << "The average of your numbers is: " << avg << "." << endl;

    delete array;

    return 0;
}
