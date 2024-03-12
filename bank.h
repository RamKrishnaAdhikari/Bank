#ifndef BANK_H
#define BANK_H
#include"girokonto.h"
#include<vector>

class bank
{
public:
    bank();
    void benutzerdialog();
    void addtokontenliste(girokonto& g);

private:
    std::vector<girokonto>kontenliste;
};

#endif // BANK_H
