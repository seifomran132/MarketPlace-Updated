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


	Globals glob = Globals();
	seller loggedSeller = seller("","","");
	Customer loggedCustomer = Customer("", "", "", "", "");

	Customer tempc = Customer("seif", "s@.", "s", "s", "s");
	customers.push_back(tempc);

	seller temps = seller("s", "ss@.", "s");
	glob.sellers.push_back(temps);

	//product_type createdProduct = temps.addingProduct();
	// seif ezz product_type createdProduct2 = temps.addingProduct();

	int enterChois;
	do {
		cout << "Enter 1 for Register\nEnter 2 for Login\n" << endl;
		cin >> enterChois;

		if (enterChois == 1) {
			cout << "Do you want to register as Customer or Seller\nEnter 1 for Customer\nEnter 2 for Seller\nEnter 3 for back" << endl;
			cin >> enterChois;

			if (enterChois == 1) {
				loggedCustomer = customerRegister(customers);
				loggedCustomer.Order_Screen();
			}
			else if (enterChois == 2) {
				sellerRegister(glob.sellers);
				
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

			if (enterChois == 1) {
				 Customer c1 = userLogin(customers);
				 if (c1.getEmail() != "") {
				 	cout << "**********Login Success**********" << endl;
					c1.Order_Screen();
				 }
				 else {
				 	cout << "**********Login Failed**********" << endl;

				 }
			}
			else {
				cout << "Seller Login" << endl;
				seller s1 = sellerLogin(glob.sellers);
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

	/*seller newSeller = seller("seif", "s@.", "s");

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
	cout << "befoooooor front method " <<  endl;

	cout << "from main " << newSeller.orders.front().name << endl;
	cout << "before omran loop" << endl;

	for (auto o : newSeller.orders) {
		cout << "Order Name " << o.products[0].name << endl;
	}
	newSeller.showOrder();*/
	return 0;
}