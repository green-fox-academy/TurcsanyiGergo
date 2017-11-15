 #include <iostream>
#include <vector>
#define Pi 3.14

using namespace std;

// Still the shape exercise!
// Create public method called how_much_to_paint()
// which should get the area and the price of the paint as parameters
// It should return the costs of the painting

class Shape {

public:
    float get_area () {
        return area;
    }
    float how_much_to_paint () {
    return area * paint_price;
    }
void set_paint_price (float pp) {
    this -> paint_price = pp;
}

protected:
    float area;
    virtual float calc_area () = 0;
    float paint_price;
};

class Circle :public Shape {

private:
    float radius;

public:
    void set_radius (float r) {
    this -> radius = r;
    calc_area();
    }

    float get_radius() {
        return radius;
    }
    Circle(float r) {
    set_radius(r);
    }
    ~Circle () {
    cout << "\nThis section is finished." << endl;
    }
private:
    float calc_area() {
        area = radius * radius * Pi;
        return area;
    }
};

class Triangle :public Shape {

private:
   float base;
   float len;

public:

    void set_len(float len) {
    this -> len = len;
    calc_area();
    }

    void set_base (float base) {
    this -> base = base;
    calc_area();
    }

    float get_len() {
        return len;
    }

    float get_base() {
        return base;
    }
    Triangle(float b, float l) {
    set_base(b);
    set_len(l);
    }
private:
    float calc_area() {
    area = (base * len) / 2;
    return area;
    }
};

int main()
{

    Circle c = Circle (0);

    c.set_radius(6);
    c.set_paint_price(500);

    cout << "The area of this circle is: " << c.get_area() << "." << endl;

    Triangle t = Triangle (5, 7.5);
    t.set_paint_price(300);
    t.set_base(7);
    t.set_len(7.8);

    cout << "The price of the circle painting is " << c.how_much_to_paint() << "." << endl;

    cout << "\nThe area of this triangle is: " << t.get_area() << "." << endl;

    cout << "The price of the triangle painting is " << t.how_much_to_paint() << "." << endl;

    return 0;
}
