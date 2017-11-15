#include <iostream>
#include <vector>

using namespace std;

// Create a Human class which is a base class for
// SuperHuman and AquaHuman
// Create a virtual function in Human class called traveling()
// It should print out different ways to travel
// For example: Human is walking. SuperHuman is flying. AquaHuman is riding with dolphins.
class Human{

    public:
        virtual void traveling(){
            cout << "Human can walk." << endl << endl;
};

class SuperHuman: public Human {

    public:
        void traveling(){
            cout << "Superhuman is able to fly." << endl << endl;

};

class AquaMan: public Human {

    public:
        void traveling(){
            cout << "AquaHuman can riding with dolphins." << endl;
        };
};

int main()
{
    Human travel;
    travel.traveling();

    SuperHuman tra;
    tra.traveling();

    AquaMan tr;
    tr.traveling();

    return 0;
}
