#include <iostream>
#include "notifikaattori.h"
#include "seuraaja.h"

using namespace std;

int main()
{
    //unique_ptr<Seuraaja> A<new Seuraaja("Aapeli")>;
    Seuraaja *A = new Seuraaja("Aapeli ");
    Seuraaja *B = new Seuraaja("Bertti ");
    Seuraaja *C = new Seuraaja("Ceebeli ");
    //Seuraaja D("Depp");
    //Seuraaja E("Erkki");

    Notifikaattori *N = new Notifikaattori();


    cout<<endl;
    N->lisaa(A);
    N->lisaa(B);
    N->lisaa(C);

    N->poista(B);
    N->tulosta();

    N->postita("Tama on viesti");

/*
    A->next = B;
    B->next = C;

    Seuraaja *alku = A;
    while(alku !=nullptr){
        cout<<"Listassa nyt = "<<alku->getNimi()<<endl;
        alku->paivitys("Kaikki ok");
        alku = alku->next;
        if (alku !=nullptr) {
        cout<<"Listassa seuraava"<<alku->getNimi()<<endl;
    } else {
        cout << "lista loppui";
    }}

    cout<<endl;

    //D.next = &E;
*/
    delete A;
    delete B;
    delete C;
    delete N;

    return 0;
}

