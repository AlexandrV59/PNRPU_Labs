#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){
    string s;// sting calc
    char f= 'A';
    char l= 'c';
    int k=0;
    string z;
    int n1;
    int n2;
    cout<<"Enter 1st:";
    cin>>n1;
    cout<<"Enter 2nd:";
    cin>>n2;
    ifstream f1("f1.txt");
    ofstream f2;
    f2.open("f2.txt");
    if(f1.is_open()){
        while(getline(f1,s)&&(k!=n1-1)){
                k++;//count sting
                for(int i=0;i<s.length();i++){
                    }
                }
        while(getline(f1,s)&&(k!=n2)){
                k++;//count sting
                for(int i=0;i<s.length();i++){
                    int calc=s.length();
                    if((s[0]==f)&&(s[calc-1]==l)){
                    cout<<s<<endl;//print on screen
                    f2<<s<<endl;
                    break;
                    }
                }
            }
    }
    cout<<s<<endl;
    f2.close();
    f1.close();
    ifstream sec("f2.txt");
    if(sec.is_open()){
        while(getline(sec,z)){
            if(z!=""){
                cout<<"1 word"<<endl;
            }
            break;
        }
    }
    sec.close();




    return 0;
}
