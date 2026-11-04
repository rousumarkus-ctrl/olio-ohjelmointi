#include <iostream>

using namespace std;

int retSum(int a,int b){
  return a+b;
}

float retDiv(int a,int b){
  if(b==0){
    throw runtime_error("Divisor cannot be zero!");
  }else{
    return (float)a/(float)b;
  }
}

void calcSum(int a,int b){
  cout << a+b << endl;
}

void calcDiv(int a,int b){
  if(b==0){
    cout << "Divisor cannot be zero!" << endl;
  }else{
    cout << (float)((float)a/(float)b) << endl;
  }
}

int main()
{
  int a,b;
  float result;
  cout << "Input number 1" << endl;
  cin >> a;
  cout << "Input number 2" << endl;
  cin >> b;
  calcSum(a,b);
  calcDiv(a,b);
  cout << a << "+" << b << " = " << retSum(a,b) << endl;
  try {
    result = retDiv(a,b);
    cout << a << "/" <<  b << " = " << result << endl;
  } catch (runtime_error& e) {
    cout<<"Error: "<< e.what()<< endl;
  }
}
