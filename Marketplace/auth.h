#pragma once
#include <string>
#include <iostream>
#include <vector>
#include "user.h"
#include "seller.h"
using namespace std;


struct userType {
	string name;
	string email;
	string password;

};

template<class t>
t userRegister(vector<t>& users);
template<class t>
t userLogin(vector<t>& users);


user customerRegister();
seller sellerRegister(vector<seller>& sellers);
user customerLogin();
seller sellerLogin(vector<seller>& sellers);
//bool emailValidation(string email);
void userLogout();
