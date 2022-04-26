#include <iostream>
#include <string>
#include <vector>
#include "seller.h"
#include "auth.h"
#include "login.cpp"
#include "Customer.h"

using namespace std;


vector<seller> sellers;
vector<Customer> customers;

int main() {

	seller loggedSeller = seller("","","");

	int enterChois;
	do {
		cout << "Enter 1 for Register\nEnter 2 for Login\n" << endl;
		cin >> enterChois;

		if (enterChois == 1) {
			cout << "Do you want to register as Customer or Seller\nEnter 1 for Customer\nEnter 2 for Seller\nEnter 3 for back" << endl;
			cin >> enterChois;

			if (enterChois == 1) {
				Customer s = customerRegister(customers);
			}
			else if (enterChois == 2) {
				loggedSeller = sellerRegister(sellers);				

			}

			else if (enterChois == 3) {
				main();
			}
			else {
				cout << "Invalid choise" << endl;
			}
		}
		else if (enterChois == 2) {
			cout << "Do you want to login as Customer or Seller\nEnter 1 for Customer\nEnter 2 for Seller\nEnter 3 for back" << endl;
			cin >> enterChois;

			if (enterChois == 2) {
				Customer c1 = userLogin(customers);
				if (c1.getEmail() != "") {
					cout << "**********Login Success**********" << endl;
				}
				else {
					cout << "**********Login Failed**********" << endl;

				}
			}
			else {
				seller s1 = userLogin(sellers);
				if (s1.getEmail() != "") {
					cout << "**********Login Success**********" << endl;
				}
				else {
					cout << "**********Login Failed**********" << endl;

				}
			}

			
		}
		else {
			break;
		}
		
	} while (true);


	cout << sellers.capacity() << endl;


	return 0;
}