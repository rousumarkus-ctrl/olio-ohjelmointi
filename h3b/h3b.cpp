#include "dog.h"

int main () {
  Animal a;
  Dog d;

  a.callOut();
  d.callOut();

  Animal *testAnimal = new Animal();
  Animal *testDog = new Dog();
  testAnimal->callOut();
  testDog->callOut();
  delete(testDog);
  delete(testAnimal);
}