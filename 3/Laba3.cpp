#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{   
    srand(static_cast<unsigned int>(time(0)));
    int n = 10;
    int arr[10];
    cout<<"Array:"<<endl;
    for (int i=0;i<10;i++)
        {   
            int randomNumber = rand();
            int number = (randomNumber % 100) -50;
            arr[i] = number;
        }
    for (int i=0; i<10;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int temp,size =10;
	for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << "Sorted array:" << endl;
    for (int i=0; i < size; i++){
    	cout << arr[i] << " ";
	}
    cout<<endl;
    for (int i = 0; i<n; i++)
    {   
        if (abs(arr[i]) % 2 ==1)
        {
            for(int j = i; j<n; j++)
            {
                arr[j] = arr[j + 1];
            }
            n--;
            i--;    
        }   
	}
    cout<<"Odd elements removed:"<<endl;
    
    int f;// index
    int w;// value
    int er; 
    cout<<"Enter index: ";
    cin>>f;    
    cout<<"Enter a value: ";
    cin>>w;
    for(int i = 0; i < n; i++)
    {
        if (i == f)
        {
            arr[i] = w;
        }
    }
    for (int i=0; i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int k = 0;
    bool z = false;

    for (int i=0; i<n;i++)
    {   
        k += arr[i];
    }
    for (int i = 0; i<n;i++)
    {
        if (k/n == arr[i])
        {   
            z = true;
            cout<<"This element is: "<<arr[i]<<endl;
        }
    }
    if (z == false)
    {
        cout<<"No arithmetic mean: "<<endl;
    }
    int kk,b;
    cout<<"Enter slide: ";
    cin>>kk;
    for(int i=0;i<kk;i++){
    b = arr[n-1];
    for(int j=n-1;j>0;j--){
        arr[j]=arr[j-1];
    }
     arr[0]=b;
    }
    cout<<"Slided array: "<<endl;
    for (int i=0; i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}









