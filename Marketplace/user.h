#pragma once
#include <string>
#include <iostream>
using namespace std;

class user
{
protected:
	bool isLoggedIn = false;
	static int nextId;
	int id;
	string name;
	string email;
	string password;
	user(string name, string email, string password);
public:
	string getEmail();
	string getPassword();
	int getID();
	string getName();
	void setIsLogged(bool val);
	bool getIsLogged();

};

