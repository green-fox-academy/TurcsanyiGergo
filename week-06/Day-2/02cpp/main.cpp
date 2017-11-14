#include <iostream>
#include <string>

using namespace std;

class Student {
  public:
    string name;
    unsigned int age;
    Student(string name, unsigned int age) {
      this->age = age;
      this->name = name;
    }
      ~Student() {
      cout << "See you next time!" << endl;
      }

};

int main() {
  // Create a new instance of the Student class and set its name to "John" and
  // it's age to 21 with it's constructor
    Student s("John", 21);

    cout << "Student name: " << s.name << " age is " << s.age << "." << endl;

  return 0;
}
