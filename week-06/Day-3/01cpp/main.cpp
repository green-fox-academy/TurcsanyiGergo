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

protected:
    float area;
    virtual float calc_area () = 0;

};

class Circle :public Shape {

private:
    float radius;

public:
    float calc_area() {
        area = radius * radius * Pi;
        return area;
    }
    Circle(float r) {
    this -> radius = r;
    }
};

class Triangle :public Shape {

private:
   int base;
   int len;

public:
    float calc_area() {
    area = (base * len) / 2;
    return area;
    }
    Triangle(float b, float l) {
    this -> base = b;
    this -> len = l;
    }
};





int main()
{

Circle c = Circle (5);

cout << "The area of this circle is: " << c.calc_area() << "." << endl;

Triangle t = Triangle (5, 7.5);

cout << "The area of this triangle is: " << t.calc_area() << "." << endl;

return 0;
}
