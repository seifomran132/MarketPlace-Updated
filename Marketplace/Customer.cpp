#include "Customer.h"
Customer::Customer(string name, string email, string password, string address, string phone)
	:user(name, email, password)
{
	this->address = address;
	this->phone = phone;
}
void Customer::browseByCategory() {
	cout << "Enter Product Category :" << endl;
	string searchCat;
	cin >> searchCat;
	myProduct.searchByCategory(searchCat);
}
deque<product_type> Customer::browseByName() {
	cout << "Enter Product Name :" << endl;
	string searchName;
	cin >> searchName;
	deque<product_type> q = myProduct.searchByName(searchName);
	/*  seif ezz 5od bosa mtklmnesh tani tmm hahahahaha 3shan mfeshn hna emoji 
	cout<<myProduct.searched_que.front().name;*/

	cout << "BrowseByName" << endl;


	return q;
}

void Customer::addProductToCart(product_type p, int q)
{
	if (p.quantity < q) {
		cout << "Sorry, no sufficient quantiy" << endl;
		cout << "Available " << p.quantity << " from this product now" << endl;
	}
	else {
		mycart.addToCart(p);
		cout << "Product Added To Cart" << endl;
	}
}

void Customer::viewCart()
{
	for (int i = 0; i < mycart.prod.size(); i++) {
		cout << "Item " << i + 1 << " " << mycart.prod[i].name << endl;
	}
	if (!mycart.prod.empty()) {
		int c;
		cout << "Enter 1 to confirm order all products" << endl;
		cin >> c;

		if (c == 1) {
			confirmOrder();
		}
		else {
			return;
		}
	}
}

void Customer::confirmOrder() {
	order newOrder = order(this->name, this->address, this->phone, this->mycart.prod);

}


void Customer::Order_Screen() {
	int ch = 'y';

	do {
		cout << endl;
		cout << "1 - Search for a product by name.\n";
		cout << "2 - Search for a product by category.\n";
		cout << "3 - View or Confirm Cart.\n";

		cout << endl;

		int choice;
		cin >> choice;
		if (choice == 1) {
			deque<product_type> searchProducts = browseByName();
			do {
				cout << "Enter product id to Add this product to cart\nEnter 0 to cancel search" << endl;
				cin >> ch;
				int quantity;
				
				for (int i = 0; i < searchProducts.size(); i++) {
					if (searchProducts[i].id == ch) {
						cout << "Please Enter Quantity" << endl;
						cin >> quantity;
						addProductToCart(searchProducts[i], quantity);
						
					}
				}
			} while (ch != 0);

		}
		else if (choice == 2) {
			browseByCategory();
		}
		else if (choice == 3) {
			viewCart();
		}
		cout << "Enter 0 to back to menu\n";
		cin >> ch;
	} while (ch == 0);
}