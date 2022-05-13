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
	Globals global = Globals();


 public:	
	vector<product_type> orderProducts;
	order(string name, string address, string phone, vector<product_type> products) {
		

		orderDetails.name = name;
		orderDetails.address = address;
		orderDetails.phone = phone;
		orderDetails.products = products;


		for (int i = 0; i < products.size(); i++) {
			if (products[i].quantity > 0) {
				assignOrder(products[i]);
				cout << "Product " << products[i].name << " Confirmed" << endl;
				products[i].quantity--;
				cout << "Quantity " << products[i].quantity << endl;

			}
			else {
				cout << products[i].name <<" Out of Stock"<<endl;
			}
		}
	}

	OrderDetails getDetails() {
		return this->orderDetails;
	}

	seller getSeller(int id);
	void assignOrder(product_type p);

};

