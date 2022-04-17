#include <iostream>
#include <string>
#include <vector>
#include "seller.h"
#include "auth.h"

using namespace std;


int main() {

	seller add = seller("saif","test","tsets");
	add.addingProduct();
	add.UpdateProduct(0);
	add.deletProduct();
	
	vector<seller> sellers;
	/*vector<user> customers;

	int enterChois;
	do {
		cout << "Enter 1 for Register\nEnter 2 for Login\n" << endl;
		cin >> enterChois;

		if (enterChois == 1) {
			cout << "Do you want to register as Customer or Seller\nEnter 1 for Customer\nEnter 2 for Seller\nEnter 3 for back" << endl;
			cin >> enterChois;

			if (enterChois == 1 || enterChois == 2) {
				userRegister(enterChois, sellers, customers);
				break;
			}
			else if (enterChois == 3) {
				main();
			}
			else {
				cout << "Invalid choise" << endl;
			}
		}
		else if (enterChois == 2) {

		}
		else {
			break;
		}
		
	} while (true);*/


	cout << sellers.capacity() << endl;


	return 0;
}