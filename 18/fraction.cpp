#include "fraction.h"
#include <iostream>
using namespace std;

void fraction::Init(double F, int S){
  first = F;
  second = S;
}

void fraction::Read(){
  cout<<"first?";
  cin>>first;
  cout<<"second?";
  cin>>second;
}

void fraction::Show(){
  cout<<"first="<<first;
  cout<<"second="<<second;
}

double fraction::Power(){
  return pow(first, second);
}
