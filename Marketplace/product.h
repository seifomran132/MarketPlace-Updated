#pragma once
#include <string>
#include <vector>
#include <queue>

using namespace std;


struct product_type {
	int id;
	string name;
	double price;
	string category;
	int quantity;
	int seller_id;

};

class product
{
	private:
		queue <product_type> searched_que;
		product_type p;
		
	public :
		static vector<product_type> prod;
		product();
		void add_products(product_type p);
		void delete_products(int deleted_id);
		void searchByCategory(string searched_category);
		void searchByName(string searched_name);

};

