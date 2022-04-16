#include <string>
#include <vector>
#include <queue>

using namespace std;

#pragma once

struct products {
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
		queue <products> searched_que;
		products p;
		int choose_operation;
		char loop_operation;
	public :
		static vector<products> prod;
		product();
		void add_products(products p);
		void delete_products();
		void search_products();


		

};

