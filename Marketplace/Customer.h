#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "user.h"
#include "cart.h"
#include "product.h"
#include "order.h"

using namespace std;

class Customer :public user
{
	string address;
	string phone;
	product myProduct;


public:
	cart mycart;
	Customer(string name, string email, string password, string address, string phone);
	void browseByCategory();
	void browseByName();
	void addProductToCart(product_type p);
	void viewCart();
	void confirmOrder();
};

