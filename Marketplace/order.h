#pragma once
#include <string>
#include <iostream>
#include <vector>
#include "seller.h"
#include "Globals.h"
using namespace std;



class order
{
	OrderDetails orderDetails;
	vector<product_type> orderProducts;
	Globals global = Globals();


 public:	
	order(string name, string address, string phone, vector<product_type> products) {
		

		orderDetails.name = name;
		orderDetails.address = address;
		orderDetails.phone = phone;
		orderProducts = products;
		cout << "Start Assign product" << endl;
		cout << "Cart " << products.size() << endl;

		for (int i = 0; i < products.size(); i++) {
			cout << "Inside loop from order con" << endl;
			assignOrder(products[i]);
		}
	}

	OrderDetails getDetails() {
		return this->orderDetails;
	}

	seller getSeller(int id);
	void assignOrder(product_type p);

};

