#include <iostream>
#include "Pair.h"
using namespace std;

int main()
{
	Pair a;
	Pair b;
	Pair c;
    cout <<"Enter a: "<<endl;
	cin >> a;
    cout<<"Enter b: "<<endl;
	cin >> b;
	double z;
	cout<<"Enter constant variable:"<<endl;
	cin>>z;
	z+a,z+b;
	cout<< "a = " <<a<< endl;
	cout<< "b = " <<b<< endl;
	cout<< "c = " <<c<< endl;
	return 0;
}
