#ifndef SERVICE_H
#define SERVICE_H
#include <string>
#include <iostream>
#include"stdlib.h"
using namespace std;
class Service
{
	private:
    int numservice;
	string description ;
	double prixparuniteconsome;
	string types;//pour préciser si c'est une communication vocale ou internet
	public:
		Service();
		Service(int num,string description,double prix,string types);
		int getnum();
		void setnum(int num);
		string getdescription();
		void setdescription(string description);
		double getprix();
		void setprix(double prix);
		void settype(string type);
		string gettype();
		void affiche();
		 ~Service();
};

#endif

