#pragma once
#include <string>
#include <iostream>
#include <vector>
#include "product.h"

using namespace std;

struct CustomerDetails {
	string name;
	string address;
	string phone;
};

class order
{
	CustomerDetails customerDetails;
	vector<product> *orderProducts;

 public:	
	order(string name, string address, string phone, vector<product> products[]) {
		customerDetails.name = name;
		customerDetails.address = address;
		customerDetails.phone = phone;
		orderProducts = products;
	}

	CustomerDetails getDetails() {
		return this->customerDetails;
	}

};

