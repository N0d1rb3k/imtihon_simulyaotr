#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

int main() {

    //Xonimqulov Nodirbek

    //qatorlar sonini aniqlash
    int line = 0;
    ifstream baza("baza.doc");
    string l;
    while(getline(baza,l)){
        line++;
    }
    baza.close();
    //qatorlar sonini aniqlash
    

    //qatorni aniqlash
    vector<int> savoln,variantn,javobn;
    vector<string> savol,variant,javob;
    for(int i =1;i<line;i+=8){
        savoln.push_back(i);
    }
    for(int i =3;i<line;i+=8){
        for(int j = i;j<i+4;j++){
            variantn.push_back(j);
        }
    }
    for(int i =7;i<line;i+=8){
        javobn.push_back(i);
    }
    //qatorni aniqlash

    //savollarni vectorlarga yig`ish
    int sline = 0;
    ifstream sfile("baza.doc");
    while(getline(sfile,l)){
        sline++;
            for(int i=0;i<savoln.size();i++){
                if(sline==savoln[i]){
                    savol.push_back(l);
                }
            }
    }
    sfile.close();
    //savollarni vectorlarga yig`ish

    //variantlarni vectorlarga yig`ish
    int vline = 0;
    ifstream vfile("baza.doc");
    while(getline(vfile,l)){
        vline++;
            for(int i=0;i<variantn.size();i++){
                if(vline==variantn[i]){
                    variant.push_back(l);
                }
            }
    }
    vfile.close();
    //variantlarni vectorlarga yig`ish
    

    //javoblarni vectorlarga yig`ish
    int jline = 0;
    ifstream jfile("baza.doc");
    while(getline(jfile,l)){
        jline++;
            for(int i=0;i<javobn.size();i++){
                if(jline==javobn[i]){
                    javob.push_back(l);
                }
            }
    }
    jfile.close();
    //javoblarni vectorlarga yig`ish

    //Xonimqulov Nodirbek

    //Test jarayoni
    vector<string> tanlov;
    string hayoq;
    cout<<"testni boshlashga tayormisiz? Ha/Yoq:";
    cin>>hayoq;
    if(hayoq == "ha" || hayoq == "Ha"){
        for(int i =0;i<savol.size();i++){
            cout<<savol[i]<<endl;
            cout<<variant[4*i]<<endl;
            cout<<variant[4*i+1]<<endl;
            cout<<variant[4*i+2]<<endl;
            cout<<variant[4*i+3]<<endl;
            cout<<"Javob:(A/B/C/D):";
            char temp;
            cin>>temp;
            cout<<endl;
            switch (temp){
            case 'A':
                tanlov.push_back(variant[4*i]);
                break;
            case 'B':
                tanlov.push_back(variant[4*i+1]);
                break;
            case 'C':
                tanlov.push_back(variant[4*i+2]);
                break;
            case 'D':
                tanlov.push_back(variant[4*i+3]);
                break;
            default:
                break;
            }            
        }
    }

    int ball = 0;
    int foiz;
    for(int i =0;i<tanlov.size();i++){
        if(tanlov[i] == javob[i]){
            ball++;
        }
    }
    foiz = (ball*100)/javob.size();
    cout<<"Natija:"<<ball<<" ball \n";
    cout<<"Foiz:"<<foiz<<"%";
    //Test jarayoni

    
    return 0;
}
