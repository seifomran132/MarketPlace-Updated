#include <iostream>
#include <string>
#include <vector>
#include "auth.h"
#include "login.cpp"
#include "Globals.h";
#include "Customer.h"

using namespace std;

static vector<Customer> customers;


int main() {

	seller loggedSeller = seller("","","");

	int enterChois;
	/*do {
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
		
	} while (true);*/

	seller newSeller = seller("seif", "s@.", "s");

	Globals global = Globals();

	global.addSeller(newSeller);

	cout << "Sellers: " << global.sellers.size() << endl;
	cout << &global.sellers << endl;

	product_type createdProduct = newSeller.addingProduct();
	Customer newCustomer = Customer("ss", "ss@.", "ss", "Cairo", "010");
	newCustomer.addProductToCart(createdProduct);
	cout<< "Cart: " << newCustomer.mycart.prod.size() << endl;
	newCustomer.confirmOrder();

	cout << "from main " << newSeller.orders.size() << endl;
	cout << "from main " << newSeller.orders.front().name << endl;

	for (auto o : newSeller.orders) {
		cout << "Order Name " << o.products[0].name << endl;
	}
	newSeller.showOrder();
	return 0;
}