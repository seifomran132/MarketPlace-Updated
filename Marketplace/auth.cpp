#include "auth.h"

void userRegister(int regType, vector<seller>& sellers, vector<user>& customer) {
	userType temp;

	cout << "Enter Your Name" << endl;
	cin >> temp.name;
	cout << "Enter Your Email" << endl;
	cin >> temp.email;
	cout << "Enter Your Password" << endl;
	cin >> temp.password;

	if (regType == 1) {
		string address;
		string phone;

		cout << "Enter Your Email" << endl;
		cin >> address;
		cout << "Enter Your Password" << endl;
		cin >> phone;
		// Initialize Customer
		return;
	}

	seller createdSeller = seller(temp.name, temp.email, temp.password);
	sellers.push_back(createdSeller);
	
}

void userLogin(int regType, vector<seller>& sellers, vector<user>& customer) {
	string enteredEmail;
	string enteredPassword;

	
	if (regType == 1) {

	}
	else if (regType == 2) {

		cout << "Enter Email" << endl;
		cin >> enteredEmail;
		cout << "Enter Password" << endl;
		cin >> enteredPassword;

		int i = 0;
		while (i != sellers.capacity()) {
			// Login Logic
		}
	}
}