#ifndef GIROKONTO_H
#define GIROKONTO_H
#include<string>
#include<vector>

class girokonto
{
public:
    girokonto();
    girokonto(int kontonummer,double kontostand);
    void buchen();
    int getkontonummer()const;
    std::vector<std::string>gettext();
    std::vector<int>getbeiträge();
private:
    int kontonummer;
    double kontostand;
    std:: vector<std::string> text;
    std::vector<int >beiträge;
};

#endif // GIROKONTO_H
