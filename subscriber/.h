#ifndef ABONNE_H
#define ABONNE_H
#include <string>
#include <iostream>
#include"stdlib.h"
using namespace std;
class Abonne
{private:
double numdeserie;
string nom ;
string adresse;
	public:
Abonne();
Abonne(string nom,string adresse,int num);
int getnserie();
string getnom();
string getadresse();
void setnserie(int num);
void setnom(string nom);
void setadresse(string adresse);
void affiche();
~Abonne();
};

#endif

