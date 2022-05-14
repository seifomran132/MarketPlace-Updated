#include "cart.h"
#include <iostream>
using namespace std;

cart::cart(void)
{
	totalPrice = 0.0;
	promo.push_back("test1");
	promo.push_back("test2");
	promo.push_back("test3");
}

void cart::addToCart(product_type p)
{
	prod.push_back(p);
}

bool cart::removeFromCart(int removed_id) {

	bool found = false;
	int i = 0;
	while (!prod.empty()) {

		if (prod[i].id == removed_id) {
			prod.erase(prod.begin() + i);
			found = true;
			break;
		}
		i++;
	}
	return found;
}

void  cart::promoPrice(string promocode)
{
	string text;
	cout << "entre promo code to get your discount : ";
	cin >> text;
	for (int i = 0; i < promo.capacity() - 1; i++)
	{
		if (promo[i] == text)
		{
			totalPrice -= 30;
			cout << "you have a 30 pounds discount.." << endl;
			cout << "your total price is :" << totalPrice << endl;
		}
		else
		{
			cout << "invalide promo code" << endl;
		}
	}
} //saif
void  cart::displayTotalPrice()
{
	double temp = 0.0;
	char ch = 'y';
	string promo;
	for (int i = 0; i < prod.size(); i++)
	{
		cout << "product Name :" << prod[i].name << endl;
		cout << "product price :" << prod[i].price << endl;
		temp += prod[i].price;

	}
	temp = totalPrice;
	cout << "total price is :" << totalPrice <<" .L.E" << endl;
	cout << "do you have a promo code ? (y/n)";
	cin >> ch;
	if (ch=='y')
	{
		cout << "entre promo code :";
		cin.ignore();
		getline(cin, promo);
		promoPrice(promo);
	}
	else
	{
		cout << "go to main menu" << endl;
	}
}//saif //saif

