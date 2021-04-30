#include "pair.h"
#include <iostream>
using namespace std;

Pair Pair::operator=(const Pair& p)
{
	if (&p == this) return *this;
	first = p.first;
	second = p.second;
	return *this;
}
Pair& operator+(Pair& p, double z){
	p.second += z;
    return p;
}

Pair& operator+(Pair& p, int z) {
    p.first += z;
	return p;
}
Pair Pair::operator-(const Pair& p){
    this->first=first-p.first;
    this->second=second-p.second;
    return *this;
}

istream& operator>>(istream& in, Pair& p)
{
	cout << "First: "; in >> p.first;
	cout << "Second: "; in >> p.second;
	return in;
}

ostream& operator<<(ostream& out, const Pair& p)
{
	out << p.first << ":" << p.second;
	return out;
}
