#pragma once
#include <vector>
#include "product.h"
class cart {
public:
	double totalPrice;
	vector <product_type> prod;
	vector<string>promo;
	cart(void);
	void addToCart(product_type);
	void displayTotalPrice();
	bool removeFromCart(int removed_id);
	void updateQuantity();//<--
	void promoPrice(string promocode);
};