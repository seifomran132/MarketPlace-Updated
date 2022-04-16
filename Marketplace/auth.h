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

void userRegister(int regType, vector<seller>& sellers, vector<user>& customer);
void userLogin(int regType, vector<seller>& sellers, vector<user>& customer);
void userLogout();

