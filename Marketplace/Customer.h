#pragma once
#include "user.h"
#include "cart.h"
#include "product.h"
#include<iostream>
#include <iostream>
#include <string>
#include <vector>
#include "cart.h"
#include "product.h"
#include <string>
#include "order.h"
using namespace std;

class Customer :public user
{
	string address;
	cart mycart;
	string phone;
	product myProduct;
	vector<order> myOrders;


public:
	Customer(string name, string email, string password, string address, string phone);
	void browseByCategory();
	void browseByName();
	void addProductToCart(product_type p);
	void viewCart();
};

