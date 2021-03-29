#include <iostream>
#include "fraction.h"
using namespace std;

fraction make_fraction(double F, int S){
  fraction t;//create new "time" vartiable
  t.Init(F,S);//field t for some parametrs
  return t;
}

int  main(){
  fraction A;
  fraction B;
  A.Init(3.0,2);
  B.Read();
  A.Show();
  B.Show();

  A.Power();
  B.Power();

  fraction *x=new fraction;
  x->Init(2.0,5);
  x->Show();
  x->Power();

  fraction mas[3];
  for(int i=0;i<3;i++){
	mas[i].Read();
  }

  for(int i=0;i<3;i++){
	mas[i].Show();
  }

  for(int i=0;i<3;i++){
	mas[i].Power();
	cout << "Mas[" << i << "].Power("<<mas[i].first<<","<<mas[i].second<<")=";
  cout<<mas[i].Power()<<endl;
  } 

fraction* p_mas=new fraction[3];
 for(int i=0;i<3;i++){
	p_mas[i].Read();
  } 
  for(int i=0;i<3;i++){
	p_mas[i].Show();
  }
  for(int i=0;i<3;i++){
	p_mas[i].Power();
	cout<<p_mas[i].Power()<<endl;
  }

  double y;int z;
  cout<<"Enter first";
  cin>>y;
  cout<<"Enter second";
  cin>>z;

  fraction F = make_fraction(y,z);
  F.Show();
  return 0;
}
