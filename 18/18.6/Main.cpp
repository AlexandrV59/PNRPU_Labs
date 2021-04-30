#include <iostream>
#include "list.h"
using namespace std;
int main()
{
	List a(5);
	cout << "Create list a: " << endl;
	cout << a <<endl;
	cin >> a;
	cout << "Full list a:" << endl;
	cout << a <<endl; 
	a[2] = 121;
	cout << "After assigment:" << endl;
	cout << a << "\n";
	cout << "Dereferencing pointer for 1-st element:" << endl;
	cout << *(a.first()) << endl;
	Iterator i = a.first();
	int n;
	cout << "Num element: ";
	cin >> n;
	i+n;
	cout << "Move to n-element in list a:" << endl;
	cout << *i << endl;
	cout << "Output value list a with dereference pointer." << endl;
	for (i = a.first(); i != a.last(); ++i)
		cout << *i << " ";
	cout << endl;
	List b(10);
	cout << "Create list b"<< endl;
	cout << b <<endl;;
	b = a;
	cout << "List b == list a" << endl;
	cout << b <<endl;
	cout << "Definition size of list b: " << b() << endl;
	List c(10);
	c = a * b;
	cout << "Multiply a, b:" << endl;
	cout << c <<endl;
    return 0;
}
