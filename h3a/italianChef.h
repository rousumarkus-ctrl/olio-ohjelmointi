#ifndef ITALIANCHEf_H
#define ITALIANCHEF_H

#include "chef.h"
class ItalianChef: public Chef
{
public:
  ItalianChef(std::string);
  ~ItalianChef();
  std::string getName();
  void makePasta();
};
#endif // ITALIANCHEF_H