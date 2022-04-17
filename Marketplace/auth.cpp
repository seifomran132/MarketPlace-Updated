#include "auth.h"

bool emailValidation(string email) {
	
	if (email.find("@") != string::npos) {
		if (email.find(".") != string::npos) {
			return true;
		}
		else {
			cout << "Invalid Email, Please enter valid email" << endl;
			return false;
		}
	}
	else {
		cout << "Invalid Email, Please enter valid email" << endl;
		return false;
	}
}

seller sellerRegister(vector<seller>& sellers) {
	userType temp;

	cout << "Enter Your Name" << endl;
	cin >> temp.name;
	
	do {
		cout << "Enter Your Email" << endl;
		cin >> temp.email;
	} while (emailValidation(temp.email) == false);
	cout << "Enter Your Password" << endl;
	cin >> temp.password;

	seller createdSeller = seller(temp.name, temp.email, temp.password);
	sellers.push_back(createdSeller);
	return createdSeller;
}
seller sellerLogin(vector<seller>& sellers) {
	string enteredEmail;
	string enteredPassword;

	cout << "Enter Email" << endl;
	cin >> enteredEmail;
	cout << "Enter Password" << endl;
	cin >> enteredPassword;

	int i = 0;
	while (i != sellers.capacity()) {
		if (sellers[i].getEmail() == enteredEmail && sellers[i].getPassword() == enteredPassword) {
			return sellers[i];
		}
		else {
			
			break;
		}
		i++;

	}
	cout << "Invalid login details";
	
	
}