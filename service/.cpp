#include "Service.h"

#include <string>
#include <iostream>
#include"stdlib.h"
using namespace std;
		Service::Service(){numservice=0;
	 description="" ;
	 prixparuniteconsome=0;
	 types="";
		}
Service::Service(int n,string d,double p,string t){
				numservice=n;
				description=d;
				prixparuniteconsome=p;
				types=t;
}
int 	Service::getnum(){return numservice;}
void 	Service::setnum(int n){numservice=n;}
string 	Service:: getdescription(){return description;}
void 	Service::setdescription(string d){ description=d;}
double 	Service:: getprix(){return prixparuniteconsome;}
void 	Service::setprix(double p){prixparuniteconsome=p;}
void 	Service::settype(string type){types=type;}
string 	Service::gettype(){return types;}
void 	Service::affiche(){ cout<<"num\n"<<numservice<<"decription\n"<<description<<"prix\n"<<prixparuniteconsome<<"types\n"<<types<<endl;
}
Service:: ~Service(){};
#include "Service.h"
