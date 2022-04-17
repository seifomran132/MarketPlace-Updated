#include <iostream>
#include <string>
#include <vector>
#include "seller.h"
#include "auth.h"

using namespace std;


vector<seller> sellers;
vector<user> customers;

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
				sellerRegister(sellers);
				
			}
			if (enterChois == 2) {
				loggedSeller = sellerRegister(sellers);
				if (loggedSeller.getEmail() != "") {
					cout << loggedSeller.getEmail()<<endl;
				}

			}
			else if (enterChois == 3) {
				main();
			}
			else {
				cout << "Invalid choise" << endl;
			}
		}
		else if (enterChois == 2) {
			seller s1 = sellerLogin(sellers);
			cout << s1.getEmail() << endl;
		}
		else {
			break;
		}
		
	} while (true);


	cout << sellers.capacity() << endl;


	return 0;
}