#pragma once
#include <string>
using namespace std;

class salary{
    string fnp;//fio
    double wage;//oklad
    double bonus;//% ^

public:
    salary();
	salary(int, string, double);
	salary(const salary&);
	~salary();
	string get_fnp();
	void set_fnp(string);
	double get_wage();
	void set_wage(double);
	double get_bonus();
	void set_bonus(double);
	void show();
};