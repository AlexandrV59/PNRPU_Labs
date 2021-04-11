#include "salary.h"
#include <iostream>
#include <string>
using namespace std;

salary get_salary(){
    string f;
    double w;
    double b;
    cout<<"Enter Surname Name Patronymic: ";
    cin>>f;
    cout<<"Enter wage: ";
    cin>>w;
    cout<<"Enter bonus in %: ";
    cin>>b;
    return salary(f, w, b);
}

void print_salary(salary s){
    s.show();
}

int main(){
    salary s1;
    s1.show();
    salary s2("Niki Lauda",250000,30);
    s2.show();
    salary s3=s2;
    s3.get_fnp("Fernando");
    s3.set_wage(150000);
    s3.set_bonus(25);
    print_salary(s3);
    s1=get_salary();
    s1.show();
    return 0;
}