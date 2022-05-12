#pragma once
#include<iostream>
#include<deque>
#include "user.h"
#include "product.h"

struct OrderDetails {
	string name;
	string address;
	string phone;
	vector<product_type> products;
};

class seller : public user
{

public:
	
	seller(string name, string email, string password);
	
	string sellerName =  name;
	static deque<OrderDetails> orders;
	product pro;
	product proloop;
	product_type sel;
	product_type addingProduct();
	void deletProduct();
	void UpdateProduct(int idToBeUpdated);
	void showOrder();

};
