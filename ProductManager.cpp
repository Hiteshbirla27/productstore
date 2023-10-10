#include "ProductManager.h"
#include "Product.h"
#include<iostream>
using namespace std;

void ProductManager::acceptdetails(){
	 	cout<<"Enter product id: ";
	 	cin>>getid;
	 	cout<<"Enter product name: ";
	 	cin>>name;
	 	cout<<"Enter total quantity of product: ";
	 	cin>>unit;
	 	cout<<"Enter price of the Product: ";
	 	cin>>price;
	 	cout<<"Enter product description: ";
	 	cin>>description;
	 }   
