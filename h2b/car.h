#ifndef CAR_H
#define CAR_H

#include <string>
using namespace std;
class Car
{
public:
  void printData();
  Car(string, string, int);
private:
  string brand;
  string model;
  int yearModel;
};

#endif // CAR_H