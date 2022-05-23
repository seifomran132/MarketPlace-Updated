#pragma once
#include <vector>
#include "product.h"


struct cart_type {
	product_type cart_products;
	int ordered_quantity;
};

class cart {
public:
	double totalPrice;
	vector <cart_type> prod;
	vector<string>promo;
	product myProd;
	cart(void);
	void addToCart(cart_type);
	void displayTotalPrice();
	bool removeFromCart(int removed_id);
	bool updateQuantity(int id, int q);
	void promoPrice(string promocode);
};