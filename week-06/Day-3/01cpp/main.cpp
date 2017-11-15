#include <iostream>
#include <vector>
#define Pi 3.14

using namespace std;

// Create a Shape class, inherit two derived class from it
// One should be Circle, and the other one is Triangle
// For each derived class, implement a calc_area() method
// which calculates the area of the shape and stores it inside
// the class (so it is a private field)
class Shape {
public:
    virtual float get_area () = 0;

};

class Circle :public Shape {
public:
    float get_area() {
    float area = radius * radius * Pi;
        return area;

    }
};

class Triangle :public Shape {
protected:
    set sides(int a, int b)
    float get_area() {
    float area = (a * b) / 2;
    }
};





int main()
{

    return 0;
}
