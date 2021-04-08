#include <iostream>
#include <fstream>
#include <string>
#include <math.h>
#include <vector>
using namespace std;

struct ID{
    string fnp;
    string data;
    string number;
};


void create(int size, ID* arr){
    string a;
    ifstream str_fnp("fnp.txt");
    ifstream str_data("data.txt");
    ifstream str_number("number.txt");
    for(int i=0;i<size;i++){
        if(str_fnp.is_open()&&str_data.is_open()&&str_number.is_open()){
            if(getline(str_fnp,a)){
               arr[i].data=a;
            }
            if(getline(str_data,a)){
               arr[i].data=a;
            }
            if(getline(str_number,a)){
               arr[i].data=a;
            }
        }
    }
    str_fnp.close();
    str_data.close();
    str_number.close();
}

int GetValue(string str) {
	int value = 0;
	int j = 1;
	for (int i=0; i<str.length(); i++) {
		value += str[i] * j;
		j++;
	}
	return value;
}

int Hash(string str, int size)
{
	double f;
	return int(size * modf(GetValue(str) * 0.803523421, &f));
}

void print(int size, ID* arr){
    cout<<"You struct: "<<endl;
    for(int i=0; i<size;i++){
        cout << "Your " << i+1 << " person: " << endl;
        cout << "|"<< arr[i].fnp<< "|"<<endl;
        cout << "|" << arr[i].data<<"|"<<endl;
        cout <<"|"<< arr[i].number << "|"<<endl;
    }
}


int main(){
vector <int> hash_[1001];
const int MD = 100, p = 26;
string s[1001];
int n;
cin >> n;
for (size_t i = 0; i < n; ++i){
cin >> s[i];
for (size_t j = 0 ; j < n; ++j){
hash_[i].push_back(-1);
}
}
for (size_t sp_i = 0; sp_i < n; ++sp_i){
long long now_h = 0;
for (size_t i = 1; i <= s[sp_i].length(); ++i){
now_h = (now_h * p + (s[sp_i][i - 1] - 'a' + 1)) % MD;
}
cout << now_h << ' ' << sp_i << '\n';
hash_[now_h].push_back(sp_i);
}
    int size;
    cout<<"*******WARNING*******"<<endl;
    cout<<"MAXIXIMUM 100 person."<<endl;
    cout<<"*******WARNING*******"<<endl;
    cout<<"Enter how many person you want: "<<endl;
    cin>>size;
    ID *arr = new ID[size];
    create(size,arr);
    print(size,arr);

    return 0;
}






