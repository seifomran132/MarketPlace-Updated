#include "seller.h"
#include<string>
#include <iostream>
using namespace std;



seller::seller(string name, string email, string password)
	:user(name, email, password)
{

}

products seller::addingProduct()
{

	sel.seller_id = this->id;
	cout << "entre product name :\t";
	cin >> sel.name;
	cout << "\n entre product price :\t";
	cin >> sel.price;
	cout << "\n entre product quantity:\t";
	cin >> sel.quantity;
	cout << "\n entre product category:\t";
	cin >> sel.category;
	por.add_products(sel);
	return sel;
}

