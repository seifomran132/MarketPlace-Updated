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
	while (i < prod.capacity()){

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


queue<product_type> product::searchByCategory(string searched_category){
	bool found = false;
	queue <product_type> searched_que;

	int i = 0;
	while(i < prod.capacity()) {
		if (prod[i].category.compare(searched_category)==0) {
			searched_que.push(prod[i]);
			cout << prod[i].id << endl;
			cout << prod[i].name << endl;
			cout << prod[i].price << endl;
			cout << prod[i].category << endl;
			cout << prod[i].quantity << endl;
			found = true;
			i++;
		}
	}
	if (!found) {
		cout << "sorry not found this category \n";
	}
	while (!searched_que.empty()) {
		return searched_que ;
	}
}

queue<product_type> product::searchByName(string searched_name) {
	bool found = false;

	queue <product_type> searched_que;

	int i = 0;
	while (i < prod.capacity()) {
		if (prod[i].name.compare(searched_name) == 0) {
			searched_que.push(prod[i]);
			cout << prod[i].id << endl;
			cout << prod[i].name << endl;
			cout << prod[i].price << endl;
			cout << prod[i].category << endl;
			cout << prod[i].quantity << endl;
			found = true;
			i++;
		}
	}
	if (!found) {
		cout << "sorry not found this product \n";
	}
	while (!searched_que.empty()) {
		return searched_que;
	}
}