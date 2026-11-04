#include "car.h"
#include <iostream>
#include "car.h"

void Car::printData()
{
  cout << brand << " "
       << model << " "
       << yearModel << endl;
}

void Car::setBrand(string brand)
{
  this->brand=brand;
}

void Car::setModel(string model)
{
  this->model=model;
}

void Car::setYearModel(int year)
{
  this->yearModel=year;
}
