#include "auth.h"

//bool emailValidation(string email) {
//	
//	if (email.find("@") != string::npos) {
//		if (email.find(".") != string::npos) {
//			return true;
//		}
//		else {
//			cout << "Invalid Email, Please enter valid email" << endl;
//			return false;
//		}
//	}
//	else {
//		cout << "Invalid Email, Please enter valid email" << endl;
//		return false;
//	}
//}


template<class t>
t userRegister(vector<t>& users) {
	userType temp;

	cout << "Enter Your Name" << endl;
	cin >> temp.name;

	do {
		cout << "Enter Your Email" << endl;
		cin >> temp.email;
		if (temp.email.find("@") != string::npos) {
			if (temp.email.find(".") != string::npos) {
				break;
			}
			else {
				cout << "Invalid Email, Please enter valid email" << endl;
				
			}
		}
		else {
			cout << "Invalid Email, Please enter valid email" << endl;
			
		}
	} while (true);
	cout << "Enter Your Password" << endl;
	cin >> temp.password;

	t createdSeller = seller(temp.name, temp.email, temp.password);
	users.push_back(createdSeller);
	return createdSeller;
}

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


//seller sellerregister(vector<seller>& sellers) {
//	usertype temp;
//
//	cout << "enter your name" << endl;
//	cin >> temp.name;
//	
//	do {
//		cout << "enter your email" << endl;
//		cin >> temp.email;
//	} while (emailvalidation(temp.email) == false);
//	cout << "enter your password" << endl;
//	cin >> temp.password;
//
//	seller createdseller = seller(temp.name, temp.email, temp.password);
//	sellers.push_back(createdseller);
//	return createdseller;
//}


//seller sellerLogin(vector<seller>& sellers) {
//	string enteredEmail;
//	string enteredPassword;
//
//	cout << "Enter Email" << endl;
//	cin >> enteredEmail;
//	cout << "Enter Password" << endl;
//	cin >> enteredPassword;
//
//	int i = 0;
//	while (i != sellers.capacity()) {
//		if (sellers[i].getEmail() == enteredEmail && sellers[i].getPassword() == enteredPassword) {
//			return sellers[i];
//		}
//		else {
//			
//			break;
//		}
//		i++;
//
//	}
//	cout << "Invalid login details";
//	
//	
//}