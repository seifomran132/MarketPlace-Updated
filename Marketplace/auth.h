#pragma once
#include <string>
#include <iostream>
#include <vector>
#include "user.h"
#include "seller.h"
#include "Customer.h"
using namespace std;


struct userType {
	string name;
	string email;
	string password;
	string address;
	string phone;
};

template<class t>
t userRegister(vector<t>& users, int type);
//template<class t>
//t userLogin(vector<t>& users);


Customer customerRegister(vector<Customer>& customers);
seller sellerRegister(vector<seller>& sellers);
user customerLogin();
seller sellerLogin(vector<seller>& sellers);
bool emailValidation(string email);
void userLogout();
