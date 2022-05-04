#include "order.h"



seller order::getSeller(int id) {
	cout << &global.sellers << endl;

	cout << "Sellers from order: " << global.sellers.size() << endl;
	for (int i = 0; i < global.sellers.size(); i++) {
		cout << "Inside the loop" << endl;
		if (global.sellers[i].getID() == id) {
			return global.sellers[i];
		}
	}
}

void order::assignOrder(product_type p) {

	for (int i = 0; i < global.sellers.size(); i++) {
		cout << "Inside the loop" << endl;
		if (global.sellers[i].getID() == p.seller_id) {
			cout << global.sellers[i].getEmail() << endl;
			global.sellers[i].orders.push_back(this->orderDetails);
			cout << &global.sellers[i].orders << endl;
		}
	}
	
	//seller mySeller = getSeller(p.seller_id);
	
}