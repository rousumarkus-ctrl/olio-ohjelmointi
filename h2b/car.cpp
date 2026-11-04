#include "car.h"
#include <iostream>

void Car::printData()
{
  cout << brand << " "
       << model << " "
       << yearModel << endl;
}

Car::Car(string brand, string model, int year)
{
  this->brand=brand;
  this->model=model;
  this->yearModel=year;
}