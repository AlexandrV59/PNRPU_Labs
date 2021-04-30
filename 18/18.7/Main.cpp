#include "list.h"
#include "Pair.h"
#include <iostream> 
using namespace std;
int main()
{
	List<int>a(5, 0);
	cin >> a;
	cout << "Initialization a:" << endl;
	cout << a << endl;
	List <int>b(10, 0);
	b = a;
	cout << "list b == а" << endl;
	cout << b << endl;
	cout << "Size list b: " << b() << endl;
	List <int>c(10, 0);
	c = a * b;
	cout << "Multiply a*b:" << c << endl;
	cout << "a-2 element:" << a[2] << endl;
	Pair c;
	cin >> c;
	List<Pair>A(5, c);
	cin >> A;
	cout << "Init list a:" << endl;
	cout << A << endl;
	List<Pair>B(10, c);
	cout << "list b == а"<< endl;
	B = A;
	cout << B << endl;
	cout << "a-3 element: " << A[3] << endl;
	List<Pair>C(10, c);
	C = B * A;
	cout << "Muliply b*a:" << C << endl;
	cout << "Size list b:"<< B() << endl;
}