#include <string>
#include <iostream>
using namespace std;

#pragma once
class user
{
private:
	static int nextId;
	int id;
	string name;
	string email;
	string password;


public:
	user(string name, string email, string password);

};

