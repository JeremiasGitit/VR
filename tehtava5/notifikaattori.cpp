#include "notifikaattori.h"

Notifikaattori::Notifikaattori() {}

void Notifikaattori::lisaa(Seuraaja *seur)
{
    //poist->next = seuraajat;
    cout<<"lisaataan seuraaja"<<seur->getNimi()<<endl;
    seur->next = seuraajat;
    seuraajat = seur;

}

void Notifikaattori::poista(Seuraaja *poist)
{
if (poist == seuraajat) {
        seuraajat = seuraajat->next;
    } else {
    Seuraaja *alku = seuraajat;
    while (alku != nullptr) {
        if (alku->next == poist->next) {
    alku ->next = poist->next;
        }
        alku = alku->next;
}
}
}

void Notifikaattori::tulosta()
{
    Seuraaja *alku = seuraajat;
    while(alku !=nullptr) {
        cout<<"listassa nyt"<<alku->getNimi()<<endl;
        alku = alku->next;
        if (alku !=nullptr) {
            cout<<"listassa seuraava"<<alku->getNimi()<<endl;
        } else {
            cout<<"lista loppui"<<endl;
        }
    }
}

void Notifikaattori::postita(string viesti)
{
    Seuraaja *alku = seuraajat;
    while(alku !=nullptr) {
        //cout<<"sai viestin, "<<alku->getNimi()<<endl;
        alku->paivitys(viesti);
        alku = alku->next;
    }
    cout<<endl;
}
