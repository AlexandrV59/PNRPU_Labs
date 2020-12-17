#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{   

    int n;
    cout<<"Enter N x N size: ";
    cin>>n;
    int arr[n][n];
    cout<<"1 - Show matrix:\n";
    cout<< "2 - Change element:\n";
    cout<< "3 - Show new matrix:\n";
    cout<< "4 - Exit:\n"<<endl;
    int k,p,value;
    int choice;
    do{
    cout<<"Choice: ";
    cin>>choice;
    switch(choice)
    {   
        case 1:
            for (int i=0; i < n ; i++)
            {   
                for (int j=0; j<n;j++)
                {
                int randomNumber = rand();
                int number = (randomNumber % 2);
                arr[i][j] = number;
                }
            }
            for (int i=0; i<n;i++)
            {
                for (int j=0; j<n;j++)
                {
                    cout<<arr[i][j]<<' ';
                }
            cout<<endl;
            }
             break;
        case 2: 
            cout<<"Enter a string: ";
            cin>>k;
            cout<<"Enter a columnl: ";
            cin>>p;
            cout<<"Enter a value: ";
            cin>>value;
            arr[k][p] = value;
            break;
        case 3:
            for (int i=0; i<n;i++)
            {
                for (int j=0; j<n;j++)
                {
                    cout<<arr[i][j]<<' ';
                }
            cout<<endl;
            }
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