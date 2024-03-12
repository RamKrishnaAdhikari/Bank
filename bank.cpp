#include "bank.h"
#include<iostream>
using namespace std;

bank::bank() {}
void bank::addtokontenliste(girokonto& g){
    kontenliste.push_back(g);

}
void bank::benutzerdialog(){
    cout<<"1.konto anlegen"<<endl;
    cout<<"2.konto buchen"<<endl;
    cout<<"0.Programm beenden"<<endl;
    cout<<"3.umsätze anzeigen"<<endl;
    int choice;
    do{
        cout<<"Geben Sie die choice ein"<<endl;
        cin>>choice;
        switch(choice){
        case 1 : {
            cout<<"Kontonummer?"<<endl;
            int kontonummer;
            cin>>kontonummer;
            cout<<"kontostand?"<<endl;
            double kontostand;
            cin>>kontostand;
            for(const auto& k : kontenliste){
                if(k.getkontonummer()==kontonummer){
                    cout<<"Dieser nummer existiert bereit"<<endl;
                    return;
                }
            }
            kontenliste.push_back(girokonto(kontonummer,kontostand));
            cout<<"Konto mit Nummer "<<kontonummer<<"angelegt"<<endl;

            break;
        }
        case 2 : {
            cout<<"Kontonummer?"<<endl;
            int kontonummer;
            cin>>kontonummer;
            for( auto& k : kontenliste){
                if(k.getkontonummer()!=kontonummer){
                     cout<<"Diese konto existiert nicht"<<endl;
                    break;

                }

             k.buchen();
            }
            break;
        }
        case 3 : {
            cout<<"kontonummer?"<<endl;
            int kontonummer;
            cin>>kontonummer;
            for( auto& a : kontenliste){
                if(a.getkontonummer()==kontonummer){
                  int   i=0;
                    for(const auto& t : a.gettext()){

                      cout<<t<<"      "<<a.getbeiträge().at(i)<<std::endl;
                          i++;

                    }
                    break;

                }
            }
            break;
        }
        case 0 : cout<<"Programm wird beendet"<<endl;
            break;

    default: cout<<"Ungültige eingabe"<<endl;

    }


}
    while(choice!=0);
}
