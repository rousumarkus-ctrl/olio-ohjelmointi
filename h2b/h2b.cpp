#include "car.h"
#include <vector>
using namespace std;
int main() {
  vector<Car> carList;
  carList.push_back(Car("Toyota", "Prius", 2022));
  carList.push_back(Car("Ford", "F150", 2010));
  carList.push_back(Car("Mercedes", "A", 2020));
  carList[1].printData();
  for (Car car : carList){
    car.printData();
  }
}