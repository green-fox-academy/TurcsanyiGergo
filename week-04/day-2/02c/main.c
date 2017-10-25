#include <stdio.h>

enum CarType {VOLVO, TOYOTA, LAND_ROVER, TESLA};

struct Car {
  enum CarType type;
  double km;
  double gas;
};

// TODO:
// Write a function that takes a Car as an argument and prints all it's stats
// If the car is a Tesla it should not print it's gas level

int main() {
    struct Car one = {VOLVO, 156165, 14};
    struct Car two = {TOYOTA, 124565, 54};
    struct Car three = {LAND_ROVER, 134655, 89};
    struct Car four = {TESLA, 12765, 11};


   printcar(two);

  return 0;
}

void printcar(struct Car car1){
    printf("%.f\n", car1.km);
    if (car1.type != TESLA){
        printf("%.f",car1.gas);
    }
}
