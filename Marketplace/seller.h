#include "user.h"
#include"product.h"
#include<iostream>
#include<vector>
#pragma once


class seller :user
{

public:
	seller(string name, string email, string password);
	string test = "Hello " + name;
	product por;
	products sel;
	products addingProduct();
};
