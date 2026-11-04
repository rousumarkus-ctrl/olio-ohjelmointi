#include "student.h"

void Student::setName(string name)
{
  this->name=name;
}

void Student::setStudentNumber(int studentNumber)
{
  this->studentNumber=studentNumber;
}

void Student::setAverage(double average)
{
  this->average=average;
}

string Student::getName()
{
  return name;
}

int Student::getStudentNumber()
{
  return studentNumber;
}

double Student::getAverage()
{
  return average;
}
