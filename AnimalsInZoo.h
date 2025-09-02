#ifndef ANIMALSINZOO_H
#define ANIMALSINZOO_H

#include "Animal.h"

class AnimalsInZoo{
 private:
  int numAnimals;
  Animal animal;

 public:
  AnimalsInZoo();
  AnimalsInZoo(Animal a);
  void display();
};

#endif
