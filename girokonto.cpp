#include "girokonto.h"
#include<iostream>

girokonto::girokonto() {}
girokonto::girokonto(int kontonummer,double kontostand):kontonummer(kontonummer),kontostand(kontostand)
    {}
int girokonto::getkontonummer()const{
    return kontonummer;
}
void girokonto::buchen(){
    std::cout<<"Betrag?"<<std::endl;
   double betrag;
    std:: cin>>betrag;

  double  k= kontostand+betrag;
    if(k<0){
        std:: cout<<"Kein ausrechendes Guthaben für Buchung"<<std::endl;

  }
    else{
        kontostand=k;
      std:: cout<<"wofürß?"<<std::endl;
      std::string beitragundtext;
      std::cin>>beitragundtext;

      std::cout<<beitragundtext<<" Buchung ausgeführt . Neuer Kontostand :"<<kontostand<<std::endl;

                 text.push_back(beitragundtext);
      beiträge.push_back(betrag);

    }


}
std::vector<std::string>girokonto::gettext(){
    return text;
}
std::vector<int> girokonto::getbeiträge(){
    return beiträge;
}
