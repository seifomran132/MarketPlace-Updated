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


deque<product_type> product::searchByCategory(string searched_category){
	bool found = false;
	deque <product_type> searched_que;

	int i = 0;
	while(i < prod.capacity()) {
		if (prod[i].category.compare(searched_category)==0) {
			searched_que.push_back(prod[i]);
			cout << "---------------------------------------------------" << endl;
			cout << "Product ID: " << prod[i].id << endl;
			cout << "Product Name: " << prod[i].name << endl;
			cout << "Product Price: " << prod[i].price << endl;
			cout << "Product Category: " << prod[i].category << endl;
			cout << "Product Quantity: " << prod[i].quantity << endl;
			cout << "---------------------------------------------------" << endl;

			found = true;
		}
		i++;
	}
	if (!found) {
		cout << "sorry not found this category \n";
	}
	while (!searched_que.empty()) {
		return searched_que ;
	}
}

deque<product_type> product::searchByName(string searched_name) {
	bool found = false;

	deque <product_type> searched_que;

	int i = 0;
	while (i < prod.capacity()) {
		
		if (prod[i].name.compare(searched_name) == 0) {
			searched_que.push_back(prod[i]);
			cout << "Product ID: " << prod[i].id << endl;
			cout << "Product Name: " << prod[i].name << endl;
			cout << "Product Price: " << prod[i].price << endl;
			cout << "Product Category: " << prod[i].category << endl;
			cout << "Product Quantity: " << prod[i].quantity << endl;
			cout << "Product Seller: " << prod[i].seller_id << endl;

			found = true;
		}
		i++;

	}
	if (!found) {
		cout << "sorry not found this product \n";
	}
	while (!searched_que.empty()) {
		return searched_que;
	}
}
void product::viewProduct()
{
	if (!prod.empty())
	{
		for (int i = 0; i < prod.size(); i++)
		{
			cout << "---------------------------------------";
			cout << "Creation time :" << prod[i].tmBuff << endl;
			cout << "Product ID :" << prod[i].id << endl;
			cout << "product name :" << prod[i].name << endl;
			cout << "product category :" << prod[i].category << endl;
			cout << "product price :" << prod[i].price << endl;
			cout << "product quentity :" << prod[i].quantity << endl;
			cout << "---------------------------------------\n";

		}
	}
	else
	{
		cout << "Sorry no products yet" << endl;
	}
}