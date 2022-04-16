#include <string>
#include <iostream>
using namespace std;

#pragma once
class user
{
protected:
	static int nextId;
	int id;
	string name;
	string email;
	string password;
	user(string name, string email, string password);




};

