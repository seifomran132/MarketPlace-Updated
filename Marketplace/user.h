#pragma once
#include <string>
#include <iostream>
using namespace std;

class user
{
protected:
	static int nextId;
	int id;
	string name;
	string email;
	string password;
	user();
	user(string name, string email, string password);
public:
	string getEmail();
	string getPassword();
	int getID();


};

