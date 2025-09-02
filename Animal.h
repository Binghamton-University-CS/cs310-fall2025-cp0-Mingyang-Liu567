#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
using namespace std;

class Animal{
 private:
  string name;
  int age;

 public:
  Animal();
  Animal(string n, int a);
  void display();
};

#endif
