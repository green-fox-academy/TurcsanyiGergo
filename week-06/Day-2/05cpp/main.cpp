#include <iostream>
#include <string>
#define Pi 3.14

using namespace std;

class Circle {
private:
    float radius;
public:
    Circle (float radius) {
        this -> radius = radius;
    }
    float get_circumference (){
        float circumference = 2 * radius * Pi;
        return circumference;
    }

    float get_area () {
        float area = radius * radius * Pi;
        return area;
    }
};

int main() {
    // Create a `Circle` class that takes it's radius as constructor parameter
    // It should have a `get_circumference` method that returns it's circumference
    // It should have a `get_area` method that returns it's area

    Circle c (5);
    cout << "The circumference of this circle is: " <<  c.get_circumference() << "." << endl;
    cout << "The area of this circle is: " <<  c.get_area() << "." << endl;

  return 0;
}
