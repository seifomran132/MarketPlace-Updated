#include "user.h"


int user::nextId = 0;

user::user(string name, string email, string password) {
	
	this->id = ++nextId;
	this->name = name;
	this->email = email;
	this->password = password;
}
string user::getEmail()
{
	return email;
}
string user::getPassword()
{
	return password;
}
int user::getID()
{
	return id;
}
string user::getName()
{
	return name;
}