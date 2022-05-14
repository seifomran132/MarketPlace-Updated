#include "login.h"
#include "GLOBALS.h"

template<class t>
t userLogin(vector<t>& users) {
	string enteredEmail;
	string enteredPassword;

	t s = t("", "", "");



	cout << "Enter Email" << endl;
	cin >> enteredEmail;
	cout << "Enter Password" << endl;
	cin >> enteredPassword;

	int i = 0;



	while (i != users.capacity()) {
		cout << "User: " << i+1 << endl;
		if (users[i].getEmail() == enteredEmail && users[i].getPassword() == enteredPassword) {
			users[i].setIsLogged(true);
			return users[i];
		}
		
		i++;

	}
	cout << "Invalid login details";
	return s;
}

