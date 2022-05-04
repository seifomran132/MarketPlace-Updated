#pragma once
#include <vector>
#include "product.h"
class cart {
	float totalPrice;
public:
	vector <product_type> prod;
	vector<string>promo;
	cart(void);
	void addToCart(product_type);
	void displayTotalPrice();
	bool removeFromCart(int removed_id);
	void updateQuantity();
	void promoPrice(string promocode);
};