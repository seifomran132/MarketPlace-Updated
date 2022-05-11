#include "product.h"
#include <iostream>


using namespace std;

vector<product_type> product::prod;

product::product() {

}

void product::add_products(product_type p) {

	prod.push_back(p);
}


void product::delete_products(int deleted_id) {
	
	bool found = false;

	

	int i=0;
	while (!prod.empty()){

		if (prod[i].id == deleted_id) {
			prod.erase(prod.begin()+i);
			found = true;
			break;
		}
		i++;
	}
	if (found) {
		cout << "deleted successfly \n";
	}
	else {
		cout << "sorry we not found this product \n";
	}
}


void product::searchByCategory(string searched_category) {
	
	

	int i = 0;
	while (!prod.empty()) {
		if (prod[i].category.compare(searched_category)==0) {
			searched_que.push(prod[i]);
		}
	}

	while (!searched_que.empty()) {
		 searched_que.pop();
		 cout << endl;
	}
}

void product::searchByName(string searched_name) {
	int x = 0;
	while (!prod.empty()) {
		cout << "Test" << endl;
		if (prod[x].name.compare(searched_name) == 0) {
			cout << prod[x].name << endl;
			searched_que.push(prod[x]);
			break;
		}
		else {
			cout << "Product not found" << endl;
			break;
		}
	}

	while (!searched_que.empty()) {
		searched_que.pop();
		cout << endl;
	}
}