#include "luottotili.h"

Luottotili::Luottotili()
{

}

Luottotili::Luottotili(string o, double lr)
    :pankkitili(o)
{
    luottoRaja =  lr;
    //cout << "luottoraja=" << luottoRaja << endl;
    cout << "Pankkitili ja luottotili luotu asiakkaalle: " << o << " luottorajalla: " << luottoRaja << endl;
}

bool Luottotili::deposit(double summa)
{
    cout<< "LR Takaisinmaksu ennen saldo= " << saldo << "summa = "<< summa << endl;
    if(summa < 0)
    {
        cout<<"summa negatiivinen"<<endl;
        return false;
    }else if (saldo - summa < 0)
    {
        cout<<"maksetaan liikaa"<<endl;
        return false;
    } else
    {
        saldo = saldo - summa;
        cout << "jalkeenVelka= "<< saldo << "summa = " << summa << endl;
        return true;
    }
}


bool Luottotili::withdraw(double summa)
{
    cout<< "LR Velan lisays ennen saldo= " << saldo << "summa = "<< summa << endl;
    if(summa < 0)
    {
        cout<<"summa negatiivinen"<<endl;
        return false;
    }else if (saldo + summa > luottoRaja)
    {
        cout<<"luottoraja ylittyy"<<endl;
        return false;
    }
    {
        saldo = saldo + summa;
        cout << "jalkeensvelka= "<< saldo << "summa = " << summa << endl;
        // jos saldo + summa > luottoraja palauta false
        return true;
    }
}

