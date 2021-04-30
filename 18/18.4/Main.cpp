#include <iostream>
#include "Person.h"
#include "Student.h"
using namespace std;
void f1(Person& c)
{
	c.set_name("Nikki");
	cout << c;
}
Person f2()
{
	Student l("Fernando", 1900, "Race", 5);
	return l;
}
int main()
{
	Person a;
	cin >> a;
	cout << a;

	Person b("Lewis", 7);
	cout << b;
	a = b;
	cout << a;

	Student c;
	cin >> c;
	cout << c << endl;
	c.for_grade();

	f1(c);
	a = f2();
	cout << a;
}