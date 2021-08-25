#include "Abonne.h"
#include <string>
#include <iostream>
#include"stdlib.h"
using namespace std;
Abonne::Abonne()
{    nom="";
    adresse="";
    numdeserie=0;
}
Abonne::Abonne(string n,string ad,int num)
{   numdeserie=num;
    nom=n;
    adresse=ad;
}
int Abonne::getnserie() {
    return numdeserie;
}
string Abonne::getadresse() {
    return adresse;
}
string Abonne :: getnom(){
	return nom;
}
void Abonne::setadresse(string ad){
    adresse=ad;
}
void Abonne::setnom(string n){
    nom=n;
}
void Abonne::affiche()
{cout<<"nom :"<<nom<<"  adresse : "<<adresse<<"  numero de  serie:  "<<numdeserie<<endl;
}
Abonne::~Abonne(){
};

#include "Abonne.h"
