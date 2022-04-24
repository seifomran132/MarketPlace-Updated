#pragma once
#include <vector>
#include "product.h"
class cart {
	float totalPrice;
public:
	vector <product> v;
	cart(void);
	void addProdect(product);
	void displayTotalPrice();
	void removeProduct(product);
	void updateQuantity();
	~cart(void);
};