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

