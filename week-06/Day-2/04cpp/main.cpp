/*#include <iostream>
#include <string>

using namespace std;



class House {
  private:
    string address;
    unsigned int area;
    unsigned int price;
  public:
    unsigned int get_price() {
      return this->price;
    }
};

int main() {
  // The market price of the houses is 400 EUR / square meters
  // Make the get_price() function work
  // Create a constructor for the House class that takes it's address and area.
  House house = House("Andrassy 66", 349);
  cout << house.get_price();

  return 0;
}
*/



#include <iostream>
#include <string>

using namespace std;



class House {
  private:
    string address;
    unsigned int area;
    unsigned int price;
  public:
    House(string address, unsigned int area) {
      this->address = address;
      this->area = area;
    }
    ~House() {
      cout << endl << "Thank you for using our services, goodbye!" << endl;
    }
    unsigned int get_price() {
      return price * area;
    }
    unsigned int set_price(unsigned int price) {
      this->price = price;
    }
};

int main() {
  // The market price of the houses is 400 EUR / square meters
  // Make the get_price() function work
  // Create a constructor for the House class that takes it's address and area.
  House house = House("Andrassy 66", 349);
  house.set_price(400);

  cout << "The price of this house (EUR): " << house.get_price() << ".\n";

  return 0;
}
