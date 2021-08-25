#ifndef CONSOMMATION_H
#define CONSOMMATION_H
#include "Ligne.h"
#include <string>
#include <iostream>
#include"stdlib.h"
#include"Service.h"
using namespace std;
class Consommation
{private:
Ligne *ligne;
Service  service ;
int mois;
int annee ;
int  uniteconsomm;
int  etat_paye ;
public :
	Consommation();
	Consommation(Ligne *ligne,Service service,int  mois,int an,int uniteconsomm,int etat_paye=0);
Service getservice();
void setservice(Service ser);
Ligne * getligne();
void setligne(Ligne * consomme);
int getuniteconsomm();
void setuniteconsomm(int val);
void setetat_paye(int etat);
int getetat_paye();
int getmois();
int getan();
	void affiche();
//	~Consommation();
	
};
#endif


