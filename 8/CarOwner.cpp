#include <iostream>
#include <string>
using namespace std;
//create structure 
struct CarOwner{
    string SNP;
    string CarNumber;
    string PhoneNumber; 
    string TechPassNumber;
};
int main(){
    int amount=10;
    CarOwner person[amount];
    //////////////////////////////////////////////////////////////////
    person[0].SNP="Andreas Nikolaus Lauda";  
    person[0].CarNumber="022";
    person[0].PhoneNumber="81043112345";
    person[0].TechPassNumber="Ferrari 312T";

    person[1].SNP="Lewis Carl Davidson Hamilton";   
    person[1].CarNumber="44";
    person[1].PhoneNumber="447441428091";
    person[1].TechPassNumber="Mercedes M11 EQ Performance 1,6 V6T";

    person[2].SNP="Michael Schumacher";
    person[2].CarNumber="1";
    person[2].PhoneNumber="447332128091";
    person[2].TechPassNumber="Mercedes FO 108X 2,4 V8";

    person[3].SNP="Fernando Alonso Diaz"; 
    person[3].CarNumber="314";
    person[3].PhoneNumber="032804982304";
    person[3].TechPassNumber="Renault R.E.18 1,6 V6T";
    //print
    unsigned short int calc=0;
    unsigned short int count=1;
    for(int i=0;i<amount;i++){
        if(person[i].SNP==""){
            continue;}
        calc++;
        cout<<i+1<<". "<<person[i].SNP<<endl;
        cout<<"   "<<person[i].CarNumber<<endl;
        cout<<"   "<<person[i].PhoneNumber<<endl;
        cout<<"   "<<person[i].TechPassNumber<<endl;
    }
    //delete element in pos...
    unsigned short int choice;
    cout<<"Delete element:";
    cin>>choice;
    person[choice-1].SNP="";
    person[choice-1].CarNumber="";
    person[choice-1].PhoneNumber="";
    person[choice-1].TechPassNumber="";
    calc=0;
    for(int i=0;i<amount;i++){
        if(person[i].SNP==""){
            continue;}
        calc++;
        cout<<calc<<". "<<person[i].SNP<<endl;
        cout<<"   "<<person[i].CarNumber<<endl;
        cout<<"   "<<person[i].PhoneNumber<<endl;
        cout<<"   "<<person[i].TechPassNumber<<endl;
    }
    //find Surname in array
    unsigned short int PosElement;//for choice pos element
    string FindSur;
    cout<<"Enter Surname:";
    getline(cin,FindSur);
    getline(cin,FindSur);
    for(int i=0;i<amount;i++){
        PosElement=i;
        if(person[i].SNP==FindSur){
                switch(PosElement){ 
                    case 0:
                        person[5].SNP=person[3].SNP;
                        person[5].CarNumber=person[3].CarNumber;
                        person[5].PhoneNumber=person[3].PhoneNumber;
                        person[5].TechPassNumber=person[3].TechPassNumber;
                        //
                        person[4].SNP=person[2].SNP;
                        person[4].CarNumber=person[2].CarNumber;
                        person[4].PhoneNumber=person[2].PhoneNumber;
                        person[4].TechPassNumber=person[2].TechPassNumber;
                        //
                        person[3].SNP=person[1].SNP;
                        person[3].CarNumber=person[1].CarNumber;
                        person[3].PhoneNumber=person[1].PhoneNumber;
                        person[3].TechPassNumber=person[1].TechPassNumber;
                        //
                        person[2].SNP=person[0].SNP;
                        person[2].CarNumber=person[0].CarNumber;
                        person[2].PhoneNumber=person[0].PhoneNumber;
                        person[2].TechPassNumber=person[0].TechPassNumber;
                        //enter first 
                        cout<<"Enter Surname,Name,Middle name:";
                        getline(cin,person[0].SNP);
                        cout<<"Enter car number:";
                        getline(cin,person[0].CarNumber);
                        cout<<"Enter phone number:";
                        getline(cin,person[0].PhoneNumber);
                        cout<<"Enter tech password:";
                        getline(cin,person[0].TechPassNumber);
                        //enter second
                        cout<<"Enter Surname,Name,Middle name:";
                        getline(cin,person[1].SNP);
                        cout<<"Enter car number:";
                        getline(cin,person[1].CarNumber);
                        cout<<"Enter phone number:";
                        getline(cin,person[1].PhoneNumber);
                        cout<<"Enter tech password:";
                        getline(cin,person[1].TechPassNumber);
                        break;
                    case 1:
                        person[6].SNP=person[4].SNP;
                        person[6].CarNumber=person[4].CarNumber;
                        person[6].PhoneNumber=person[4].PhoneNumber;
                        person[6].TechPassNumber=person[4].TechPassNumber;
                        //
                        person[5].SNP=person[3].SNP;
                        person[5].CarNumber=person[3].CarNumber;
                        person[5].PhoneNumber=person[3].PhoneNumber;
                        person[5].TechPassNumber=person[3].TechPassNumber;
                        //
                        person[4].SNP=person[2].SNP;
                        person[4].CarNumber=person[2].CarNumber;
                        person[4].PhoneNumber=person[2].PhoneNumber;
                        person[4].TechPassNumber=person[2].TechPassNumber;
                        //
                        person[3].SNP=person[1].SNP;
                        person[3].CarNumber=person[1].CarNumber;
                        person[3].PhoneNumber=person[1].PhoneNumber;
                        person[3].TechPassNumber=person[1].TechPassNumber;
                        //enter first 
                        cout<<"Enter Surname,Name,Middle name:";
                        getline(cin,person[1].SNP);
                        cout<<"Enter car number:";
                        getline(cin,person[1].CarNumber);
                        cout<<"Enter phone number:";
                        getline(cin,person[1].PhoneNumber);
                        cout<<"Enter tech password:";
                        getline(cin,person[1].TechPassNumber);
                        //enter second
                        cout<<"Enter Surname,Name,Middle name:";
                        getline(cin,person[2].SNP);
                        cout<<"Enter car number:";
                        getline(cin,person[2].CarNumber);
                        cout<<"Enter phone number:";
                        getline(cin,person[2].PhoneNumber);
                        cout<<"Enter tech password:";
                        getline(cin,person[2].TechPassNumber);
                        break;
                    case 2:
                        person[7].SNP=person[5].SNP;
                        person[7].CarNumber=person[5].CarNumber;
                        person[7].PhoneNumber=person[5].PhoneNumber;
                        person[7].TechPassNumber=person[5].TechPassNumber;
                        //
                        person[6].SNP=person[4].SNP;
                        person[6].CarNumber=person[4].CarNumber;
                        person[6].PhoneNumber=person[4].PhoneNumber;
                        person[6].TechPassNumber=person[4].TechPassNumber;
                        //
                        person[5].SNP=person[3].SNP;
                        person[5].CarNumber=person[3].CarNumber;
                        person[5].PhoneNumber=person[3].PhoneNumber;
                        person[5].TechPassNumber=person[3].TechPassNumber;
                        //
                        person[4].SNP=person[2].SNP;
                        person[4].CarNumber=person[2].CarNumber;
                        person[4].PhoneNumber=person[2].PhoneNumber;
                        person[4].TechPassNumber=person[2].TechPassNumber;
                        //enter first 
                        cout<<"Enter Surname,Name,Middle name:";
                        getline(cin,person[2].SNP);
                        cout<<"Enter car number:";
                        getline(cin,person[2].CarNumber);
                        cout<<"Enter phone number:";
                        getline(cin,person[2].PhoneNumber);
                        cout<<"Enter tech password:";
                        getline(cin,person[2].TechPassNumber);
                        //enter second
                        cout<<"Enter Surname,Name,Middle name:";
                        getline(cin,person[3].SNP);
                        cout<<"Enter car number:";
                        getline(cin,person[3].CarNumber);
                        cout<<"Enter phone number:";
                        getline(cin,person[3].PhoneNumber);
                        cout<<"Enter tech password:";
                        getline(cin,person[3].TechPassNumber);
                        break;
                    case 3:
                        person[7].SNP=person[5].SNP;
                        person[7].CarNumber=person[5].CarNumber;
                        person[7].PhoneNumber=person[5].PhoneNumber;
                        person[7].TechPassNumber=person[5].TechPassNumber;
                        //
                        person[7].SNP=person[5].SNP;
                        person[7].CarNumber=person[5].CarNumber;
                        person[7].PhoneNumber=person[5].PhoneNumber;
                        person[7].TechPassNumber=person[5].TechPassNumber;
                        //
                        person[6].SNP=person[4].SNP;
                        person[6].CarNumber=person[4].CarNumber;
                        person[6].PhoneNumber=person[4].PhoneNumber;
                        person[6].TechPassNumber=person[4].TechPassNumber;
                        //
                        person[5].SNP=person[3].SNP;
                        person[5].CarNumber=person[3].CarNumber;
                        person[5].PhoneNumber=person[3].PhoneNumber;
                        person[5].TechPassNumber=person[3].TechPassNumber;
                        //enter first 
                        cout<<"Enter Surname,Name,Middle name:";
                        getline(cin,person[3].SNP);
                        cout<<"Enter car number:";
                        getline(cin,person[3].CarNumber);
                        cout<<"Enter phone number:";
                        getline(cin,person[3].PhoneNumber);
                        cout<<"Enter tech password:";
                        getline(cin,person[3].TechPassNumber);
                        //enter second
                        cout<<"Enter Surname,Name,Middle name:";
                        getline(cin,person[4].SNP);
                        cout<<"Enter car number:";
                        getline(cin,person[4].CarNumber);
                        cout<<"Enter phone number:";
                        getline(cin,person[4].PhoneNumber);
                        cout<<"Enter tech password:";
                        getline(cin,person[4].TechPassNumber);
                        break;}}}
    calc=0;
    for(int i=0;i<amount;i++){
        if(person[i].SNP==""){
            continue;}
        calc++;
        cout<<calc<<". "<<person[i].SNP<<endl;
        cout<<"   "<<person[i].CarNumber<<endl;
        cout<<"   "<<person[i].PhoneNumber<<endl;
        cout<<"   "<<person[i].TechPassNumber<<endl;
    }
    return 0;
}

    




































