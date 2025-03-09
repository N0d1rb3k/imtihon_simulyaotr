#include <iostream>
#include <fstream>
using namespace std;

int main(){
    //Nodirbek Xonimqulov
    int soni;
    cout<<"Savollar sonini kiriting: ";
    cin>>soni;
    cout<<endl;
    string *savol = new string[soni];
    string *variant = new string[4*soni];
    string *javob = new string[soni];
    for(int i = 0;i<soni;i++){
        char Temp;
        cout<<i+1<<"."<<"Savolni kiriting: ";
        cin>>ws;
        getline(cin,savol[i]);
        cout<<"(A)javobni kiriting: ";
        getline(cin,variant[4*i]);
        cout<<"(B)javobni kiriting: ";
        getline(cin,variant[4*i+1]);
        cout<<"(C)javobni kiriting: ";
        getline(cin,variant[4*i+2]);
        cout<<"(D)javobni kiriting: ";
        getline(cin,variant[4*i+3]);
        cout<<"Tog'ri javobni kiriting(A/B/C/D): ";
        cin>>Temp;
        cout<<endl;
        switch(Temp){
            case 'A':
                javob[i] = variant[4*i];
                break;
            case 'B':
                javob[i] = variant[4*i+1];
                break;
            case 'C':
                javob[i] = variant[4*i+2];
                break;
            case 'D':
                javob[i] = variant[4*i+3];
                break;
        }
    }
    cout<<"*********Tekshiruv*********\n";
    for(int i = 0;i<soni;i++){
        cout<<i+1<<"."<<"savol:"<<savol[i]<<endl;
        cout<<"Variant(A):"<<variant[4*i]<<"\n";
        cout<<"Variant(B)"<<variant[4*i+1]<<"\n";
        cout<<"Variant(C)"<<variant[4*i+2]<<"\n";
        cout<<"Variant(D)"<<variant[4*i+3]<<"\n";
        cout<<i+1<<"."<<"javob:"<<javob[i]<<endl;
    }
    cout<<"***************************";
    ofstream baza("Baza.doc",ios::app);
    for(int i = 0;i<soni;i++){
        baza<<i+1<<"."<<savol[i]<<endl<<endl;
        baza<<variant[4*i]<<endl;
        baza<<variant[4*i+1]<<endl;
        baza<<variant[4*i+2]<<endl;
        baza<<variant[4*i+3]<<endl;
        baza<<javob[i]<<endl<<endl;
    }
    baza.close();
    delete[] savol;
    delete[] variant;
    delete[] javob;
    //Nodirbek Xonimqulov
    return 0;
}