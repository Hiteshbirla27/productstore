#include "Product.h"
#include<iostream>
using namespace std;
    Product::Product()
{
	id = 12;
	name ="Bourbon";
	unit=1;
	price=20;
	description="Cookies and Cream";
}
 
    Product::Product(int id,string name,int unit,double price,string description)
{
	this->id=id;
	this->name=name;
	this->unit=unit;
	this->description=description;
	this->price=price;
}
//getters
        int Product::getid()
        {
        	return id;
		}
		string Product::getname()
		{
			return name;
		}
		int Product::getunit()
		{
			return unit;
		}
		double Product::getprice()
		{
			return price;
		}
		string Product::getdescription()
		{
			return description;
		}
	//setters
		void Product::setid(int id)
		{
			this->id = id;
		}
		void Product::setname(string name)
		{
			this->name = name;
		}
		void Product::setunit(int unit)
		{
			this->unit = unit;
		}
		void Product::setprice(double price)
		{
			this->price = price;
		}
		void Product::setdescription(string description)
		{
			this->description = description;
		}
		void Product::display()
		{
			cout<<id<<" "<<name<<" "<<unit<<" "<<price<<" "<<description;
		}
Product::~Product()
{
	
}
