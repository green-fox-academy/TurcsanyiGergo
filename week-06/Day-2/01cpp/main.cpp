#include <iostream>
#include <string>

using namespace std;

class Student {
  public:
    string name;
    unsigned int age;
};

int main() {
  // Create a new instance of the Student class and set it's name to "John" and
  // it's age to 21

  Student st;

  st.name = "John";
  st.age = 21;

  cout << "Student name: " << st.name << ", age: " << st.age << "." << endl;

  return 0;
}
