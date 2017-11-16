#include <iostream>
#include <string>
#include <vector>
#include <time.h>
#include <cstdlib>


using namespace std;

int main() {

	//create a vector of integers with the size of 20
	//fill this vector with random numbers from 0 to 10
	//print the items of the vector
  //remove the even numbers, then print the items again

    vector <int> int_vector(20);

    srand(time(NULL));

     for (unsigned int i = 0; i < int_vector.size(); ++i){
        //int_vector[i] = (rand() % 11);
        int_vector.at(i) = rand() % 11;
        cout << int_vector[i] << " ";
    }
        cout << endl;
    for (unsigned int i = 0; i < int_vector.size(); ++i) {
    if (int_vector[i] % 2 == 0) {
        int_vector.erase (int_vector.begin() + i);
        --i;
    }

    }
    for (unsigned int i = 0; i < int_vector.size(); ++i) {
        cout << int_vector[i] << " ";
    }

    return 0;
}
