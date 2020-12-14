#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;


int main()
{  
    srand(static_cast<unsigned int>(time(0)));
    int n = 100;
    int arr[n];
    cout<<"Random Array:"<<endl;
    for (int i=0;i<n;i++)
        {   
            int randomNumber = rand();
            int number = (randomNumber % 10);
            arr[i] = number;
        }
    cout<<endl; 
    cout<<"***MENU***\n";
    cout<<"1 - Show Array:\n";
    cout<< "2 - Add element:\n";
    cout<< "3 - Remove element:\n";
    cout<< "4 - Exit:\n"<<endl;
    int choice;
    do{
    cout<<"Choice: ";
    cin>>choice;
    switch(choice)
    {   
        case 1:
            for (int i=0; i<10;i++)
             {
                cout<<arr[i]<<" ";
             }
             cout<<endl;
             cout<<"First element:"<<arr[0]<<"  Last element:"<<arr[9]<<endl;
             break;
        case 2: 
            cout<<"You picked Add element.\n";
            cout<<"Enter value: ";
            int number;
            cin>> number;
            arr[10] = number;
            for (int i=0; i<11;i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
            cout<<"First element:"<<arr[0]<<"  Last element:"<<arr[10]<<endl;
            cout<<endl;
            break;
        case 3:
            cout<<"You picked Remove element.\n";
            for (int i = 0; i<n; i++)
            {   
                arr[i] = arr[i+1];
            } 
            for (int i=0; i<10;i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
            cout<<"First element:"<<arr[0]<<"  Last element:"<<arr[9]<<endl;
            cout<<endl;
            break;
        case 4:
            cout<<"Have a good day <*>_<*> .\n";
            break;
        default: //else
            cout<<"You pick a illegal choice.\n";
    }
    }while(choice != 4);      



















    return 0;
}