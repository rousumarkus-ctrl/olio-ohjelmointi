#include "chef.h"
#include "italianChef.h"
#include <iostream>
using namespace std;
int main(){
  {
    Chef chef("Gordon Ramsay");
    chef.makeSalad();
    chef.makeSoup();
  }
  ItalianChef italianChef("Anthony Bourdain");
  italianChef.makeSalad();
  italianChef.makeSoup();
  italianChef.makePasta();
  cout << "name of the Italian Chef is " << italianChef.getName() << endl;
}