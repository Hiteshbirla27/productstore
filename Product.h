#ifndef PRODUCT_H
#define PRODUCT_H
#include<iostream>
using namespace std;
class Product
{
	private:
    int id,unit;
	string name,description;
	double price;
	public:
		Product();
		Product(int id,string name,int unit,double price,string description);
		
		int getid();
		string getname();
		int getunit();
		double getprice();
		string getdescription();
		
		void setid(int id);
		void setname(string name);
		void setunit(int unit);
		void setprice(double price);
		void setdescription(string description);
		
		void display();
		~Product();
	
};

#endif
