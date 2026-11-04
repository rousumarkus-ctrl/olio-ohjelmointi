#ifndef CAR_H
#define CAR_H

#include <string>
using namespace std;
class Car {
public:
  void printData();
  void setBrand(std::string);
  void setModel(std::string);
  void setYearModel(int);
private:
  std::string brand;
  std::string model;
  int yearModel;
};

#endif // CAR_H