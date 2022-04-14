#pragma once
#include <string>
#include <iostream>
using namespace std;
class auth
{

public:
	static void userRegister();
	static void userLogin(string email, string password);
	static void userLogout();


};

