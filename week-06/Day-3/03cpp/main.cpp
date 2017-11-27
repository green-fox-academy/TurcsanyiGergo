#include <iostream>
#include <vector>
#define Pi 3.14

using namespace std;

// Still the shape exercise!
// Create public method called how_much_to_paint()
// which should get the area and the price of the paint as parameters
// It should return the costs of the painting

class Shape {  // In C there is no "Class", only Struct
                // Difference (Class could contain functions)

public:         //In C everything is public and there inheritance
    float get_area () {
        return area;
    }
    float how_much_to_paint () {
    return area * paint_price;
    }
void set_paint_price (float pp) {
    this -> paint_price = pp;           //The "this" is a pointer what points to object
}

protected:                      // Protected class: Only the child classes are able too see the protected members
    float area;
    virtual float calc_area () = 0;     // Virtual : define a function in a class and you want it to be inheritanced, you can override it.
    float paint_price;
};

class Circle :public Shape {  //Here you can see that the new "Circle" class what inheritates the feautures of the parent/base Class (Shape)

private:                       // THis is private because only the "Circle" is able to see this variable
    float radius;

public:
    void set_radius (float r) {     // Set-get method : THe variables are private, so we need public functions to set and get the value of these variables. This could be a security feature, it's not possible to modify the original value from outside
    radius = r;
    calc_area();
    }

    float get_radius() {            //get method
        return radius;
    }
    Circle(float r, float price) {               // "Constructor" = initializer function for setting initial values for certain member variables.
    set_radius(r);
    set_paint_price(price);
    }
    ~Circle () {                    // It runs when the program is finished or the object is deleted
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

    float calc_area() {
    area = (base * len) / 2;
    return area;
    }
};

int main()
{

    Circle c = Circle (6, 500);  // Create an object named "c", what's type is "Circle", in the bracket the number is the parameter of the constrtuctor

    //c.set_radius(6);
    //c.set_paint_price(500);

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
