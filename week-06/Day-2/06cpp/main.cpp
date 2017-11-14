#include <iostream>
#include <string>

using namespace std;

class Car {
private:
    string type;
    int km;

public:
    Car(string type, int km) {
    this -> type = type;
    this -> km = km;
    }
    ~Car() {
    cout << endl << "This program is finished." << endl;
    }

    int run (int plus_km) {
    km += plus_km;
    return km;
    }
};

int main() {

    // Create a class called "Car"
    // It should have a "type" property that stores the car's type in a string eg: "Mazda"
    // It should have a "km" property that stores how many kilometers it have run
    // The km and the type property should be a parameter in the constructor
    // It should have a method called "run" that takes a number and increments the "km" property by it
    Car c ("Lexus", 69513);

    cout << "The car's current mileage is: " << c.run(2120) << endl;

  return 0;
}
