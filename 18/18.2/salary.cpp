#include "salary.h"
#include <iostream>
#include <string>
using namespace std;

salary::salary(){
    fnp="";
    wage=0.0;
    bonus=0.0;
    cout<<"Empty constructor for "<<this<<endl;
}

salary::salary(string f, double w, double b){
    fnp=f;
    wage=w;
    bonus=b;
    cout<<"Constructor with parametrs for "<<this<<endl;
}

salary::salary(const salary &s){
    fnp=s.fnp;
    wage=s.wage;
    bonus=s.bonus;
    cout<<"Copy constructor for "<<this<<endl;
}

salary::~salary(){
    cout<<"Destructor for"<<this<<endl;
}

string salary::get_fnp(){
    return fnp;
}

double salary::get_wage(){
    return wage;
}
 
double salary::get_bonus(){
    return bonus;
}

void salary::set_fnp(string f){
    fnp=f;
}

void salary::set_wage(double w){
    wage=w;
}

void salary::set_bonus(double b){
    bonus=b;
}

void salary::show(){
    cout<<"Surname Name Patronymic: "<<fnp<<endl;
    cout<<"Wage: "<<wage<<endl;
    cout<<"Bonus: "<<bonus<<endl;
}