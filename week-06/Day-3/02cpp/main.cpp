#include <iostream>
#include <vector>
#define Pi 3.14

using namespace std;

// Continue the Shape exercise!
// Create getter methods for each values
// (for example: in a Triangle class you should be able to
// get: Height, Base and Area)

class Shape {

public:
    float get_area () {
        return area;
    }

protected:
    float area;
    virtual float calc_area () = 0;

};

class Circle :public Shape {

private:
    float radius;

public:
    void set_radius (float r) {
    this -> radius = r;
    }

    float get_radius() {
        return radius;
    }

    float calc_area() {
        area = radius * radius * Pi;
        return area;
    }
    Circle(float r) {
    set_radius(r);
    }
};

class Triangle :public Shape {

private:
   float base;
   float len;

public:

    void set_len(float len) {
    this -> len = len;
    }

    void set_base (float base) {
    this -> base = base;
    }

    float get_len() {
        return len;
    }

    float get_base() {
        return base;
    }

    float calc_area() {
    area = (base * len) / 2;
    return area;
    }
    Triangle(float b, float l) {
    set_base(b);
    set_len(l);
    }
};

int main()
{

Circle c = Circle (5);

c.set_radius(6);

cout << "The area of this circle is: " << c.get_area() << "." << endl;

Triangle t = Triangle (5, 7.5);

c.set_base(7);
c.set_len(7.8);

cout << "The area of this triangle is: " << t.get_area() << "." << endl;

return 0;
}
