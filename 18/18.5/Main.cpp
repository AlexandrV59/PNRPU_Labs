#include <iostream>
#include <string>
#include "Vector.h"
#include "Person.h"
#include "Object.h"
#include "Student.h"
using namespace std;

int main()
{
	Vector v(5);
	Person a;
	cin >> a;
	Student b;
	cin >> b >> endl;
	cout << a << endl;
	cout << b << endl;
	b.for_grade();
	cout << endl;
	cout << endl;
	Object* p = &a;
	p->Show();
	v.Add(p);
	p = &b;
	p->Show();
	v.Add(p);
	cout << v;
	return 0;
}