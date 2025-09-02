#include "Animal.h"
#include <iostream>
using namespace std;

Animal::Animal(){
  name = "";
  age = 0;
}

Animal::Animal(string n, int a){
  name =n;
  age = a;
}

void Animal::display(){
  cout << "Animal: " << name << ", Age: " << age << endl;
}
