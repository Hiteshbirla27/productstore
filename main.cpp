#include <iostream>
#include<vector>
#include"Product.h"
#include "ProductManager.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	Product P(2,"Chips",1,10,"Snacks");
	P.display();
	ProductManager pm;
	vector<ProductManager>vector1;
	pm.acceptdetails();
	vector1.push_back(pm);
	return 0;
}
