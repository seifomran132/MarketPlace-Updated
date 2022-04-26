#include "login.h"


template<class t>
t userLogin(vector<t>& users) {
	string enteredEmail;
	string enteredPassword;

	cout << "Enter Email" << endl;
	cin >> enteredEmail;
	cout << "Enter Password" << endl;
	cin >> enteredPassword;

	int i = 0;
	while (i != users.capacity()) {
		if (users[i].getEmail() == enteredEmail && users[i].getPassword() == enteredPassword) {
			
			return users[i];
		}
		else {

			break;
		}
		i++;

	}
	cout << "Invalid login details";

}

