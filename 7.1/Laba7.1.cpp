#include <iostream>     
using namespace std;

int hours_min()
{   
    int x,y;
    cout<<"Enter hours : ";
    cin>>x;
    cout<<"Enter minutes :";
    cin>>y;

    if (x<=0||x>=23||y >= 59|| y <= 0)
    {   
        cout<<"Error:"<<endl;
        hours_min();
    }
    else
    {   
        return x*60 + y;
    }
}
void min_hours(int &min1)
{
    int x;
    cout<<"Enter minutes: ";
    cin>>x;
    if (x<0)
    {
        cout<<"Error:"<<endl;
        min_hours(min1);
    }
    else
    {
        min1 = x;
    }
}
int main()
{   
    cout<<"***MENU***\n";
    cout<<"1 - Hours to min:\n";
    cout<< "2 - Min to hours:\n";
    cout<< "3 - Exit:\n";
    int choice;
    do{
        cout<<"Choice: ";
        cin>>choice;
        switch(choice)
        {
            case 1:
                int hours,min;
                cout<<"Result is: "<<hours_min()<<endl;
                break;
            case 2:
                int min1;
                float s;
                min_hours(min1);
                s = min1/60.0f;
                cout<<"Result is: "<<s<<endl;
                break;
            case 3:
                cout<<"Have a good day <*>_<*> .\n";
                break;
            default: //else
                cout<<"You pick a illegal choice.\n";
        }
    }while (choice != 3);


    return 0;
}












