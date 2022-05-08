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
void Customer::browseByName() {
	cout << "Enter Product Name :" << endl;
	string searchName;
	cin >> searchName;
	myProduct.searchByName(searchName);

}

void Customer::addProductToCart(product_type p)
{
	mycart.addToCart(p);
}

void Customer::viewCart()
{
	//mycart.displayProduct();
}

void Customer::confirmOrder() {
	cout << "Cart from customer: " << mycart.prod.size() << endl;
	order newOrder = order(this->name, this->address, this->phone, this->mycart.prod);
	cout << "Cart Products from customer: " << newOrder.orderProducts.size() << endl;

}