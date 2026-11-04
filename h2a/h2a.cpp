#include "car.h"
#include "rectangle.h"
#include <iostream>
#include "student.h"
#include <memory>
int main() {
  Car car;
  car.setBrand("Toyota");
  car.setModel("Prius");
  car.setYearModel(2022);
  car.printData();
  Rectangle *rectangle = new Rectangle;
  rectangle->setHeight(10.5);
  rectangle->setWidth(5.5);
  cout << rectangle->getArea() << endl;
  cout << rectangle->getCircum() << endl;
  delete rectangle;
  unique_ptr<Student> student = make_unique<Student>();
  student->setName("Markus");
  student->setStudentNumber(1);
  student->setAverage(2);
  cout << student->getName() << endl;
  cout << student->getStudentNumber() << endl;
  cout << student->getAverage() << endl;
}