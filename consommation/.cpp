#include "Consommation.h"
#include "Ligne.h"
#include <string>
#include <iostream>
#include"stdlib.h"
using namespace std;

	Consommation::Consommation():ligne(),service(){

mois=1;
annee=0 ;
 uniteconsomm=0;
 etat_paye =0;
	}
	Consommation::Consommation(Ligne* l ,Service servi,int m,int an,int u,int etat):ligne(l),service(servi){
		
			mois=m;
			annee=an;
			uniteconsomm=u;
			etat_paye=etat;
	}
Service Consommation::getservice() {return service;
}
void Consommation::setservice(Service serv)
{	 service.setnum(serv.getnum());
    service.setprix(serv.getprix());
     service.setdescription(serv.getdescription());
service.settype(serv.gettype()); 
}
Ligne* Consommation::getligne(){
	return ligne;
}
void Consommation::setligne(Ligne * con){
	ligne=con;
}
int Consommation::getuniteconsomm(){return uniteconsomm;
}
void Consommation::setuniteconsomm(int val){ uniteconsomm=val;
}
void Consommation::setetat_paye(int etat){ etat_paye=etat;
}
int Consommation::getetat_paye(){return etat_paye;
}
int Consommation::getmois(){return mois;
}
int Consommation::getan(){return annee;
}

	void Consommation::affiche(){
	cout<<mois<<annee;
	}

#include "consommation.h"
