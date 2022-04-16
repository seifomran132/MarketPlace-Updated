#include "product.h"
#include <iostream>


using namespace std;

vector<products> product::prod;

product::product() {

	/*
	do {
		cout << "TO add press : 1 \n TO delete press : 2 \n TO search press :3  \n";
		cin >> choose_operation;
		switch (choose_operation) {
			case 1:
				this->add_products();
				break;
			case 2:
				this->delete_products();
				break;
			case 3:

				break;
		}

		cout << "To make another operation press Y :\n To exit press N:  \t ";
		cin >> loop_operation;

	} while (loop_operation == 'y' || loop_operation == 'Y');
	*/
}

void product::add_products(products p) {

	/* DONT NEED THIS
	cout << "\n enter the id of product :\t";
		cin >> p.id;
	cout << "\n enter the name of product :\t";
		cin >> p.name;
	cout << "\nenter the price of product :\t";
		cin >> p.price;
	cout << "\n enter the category of product :\t";
		cin >> p.category;
	cout << "\n enter the quantity of product :\t";
		cin >> p.quantity;

	//must taken from loggin  information i but it as default zero 
	p.seller_id = sellerID;
	*/
	

	// push the product to the datastructure in this line  
	prod.push_back(p);
}


void product::delete_products() {
	
	int deleted_id;

	cout << "enter the id of product to delete it :\t";
	cin >> deleted_id;
	bool found=false;

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


void product::search_products() {
	
	string searched ;

	cout << "enter the name of category you want to search in \n";
	cin >> searched;

	int i = 0;
	while (!prod.empty()) {
		if (prod[i].category.compare(searched)==0) {
			searched_que.push(prod[i]);
		}
	}

	while (!searched_que.empty()) {
		 searched_que.pop();
		 cout << endl;
	}
}
