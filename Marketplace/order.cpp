#include "order.h"



seller order::getSeller(int id) {
	for (int i = 0; i < global.sellers.size(); i++) {
		if (global.sellers[i].getID() == id) {
			return global.sellers[i];
		}
	}
}

void order::assignOrder(cart_type p) {

	for (int i = 0; i < global.sellers.size(); i++) {
		if (global.sellers[i].getID() == p.cart_products.seller_id) {
			global.sellers[i].orders.push_back(this->getDetails());
			

		}
	}
	
	//seller mySeller = getSeller(p.seller_id);
	
}