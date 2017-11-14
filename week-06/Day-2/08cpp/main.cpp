#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
#include <time.h>

using namespace std;

class Student {

    private:
        int grade;
        int size_v;
        vector <int> myVector;

    public:
        //Student() {
       // }
int add_grade() {

            size_v = 5;

            for (unsigned int i = 0; i < size_v; ++i)
                myVector.push_back(rand() % 5 + 1);
                cout << "The grades are: ";
            for (unsigned int i = 0; i < size_v; ++i)
                cout << myVector[i] << " ";

            return 0;
        }

float get_average(){
            float sum;
            float avg;

            for (int i = 0; i < size_v; ++i){
                sum += (float)myVector[i];
            }
            avg = sum / (float)size_v;

            return avg;
        }
};

int main() {

    srand(time(NULL));

    Student s;

    s.add_grade();

    cout << endl << "\nThe average grade is: " << s.get_average() << "." << endl;
    // Create a student Class
    // that has a method `add_grade`, that takes a grade from 1 to 5
    // an other method `get_average`, that returns the average of the
    // grades

  return 0;
}

