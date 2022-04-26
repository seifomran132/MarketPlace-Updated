#include "cart.h"
#include <iostream>
using namespace std;

cart::cart(void)
{
	totalPrice = 0;

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


