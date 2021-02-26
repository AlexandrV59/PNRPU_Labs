#include <iostream>
#include <string>
using namespace std;

int main(){
    int size;
    string buf;
    cout<<"Enter array size:";
    cin>>size;
    string *array = new string[size];
    for(int i = 0;i<size;i++){
        cin>>array[i];
    }
    for(int i=0;i<size;i++){
		if(array[i].length()>array[i+1].length()){
		    	buf = array[i+1];
		    	array[i+1]=array[i];
				array[i]=buf;
	    }
	}
    cout<<"sorted"<<endl;
    for(int i = 0;i<size;i++){
        cout<<array[i]<<endl;
    }
    string *narray = new string[size-1];
    for(int i=0;i<size-1;i++){
        narray[i]=array[i+1];
    }
    for(int k=0;k<size-1;k++){
        cout<<narray[k]<<endl;
    }
    delete[] array;
    return 0;
}


