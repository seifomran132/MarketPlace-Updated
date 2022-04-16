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
	private :
		vector<products> prod;
		queue <products> searched_que;
		products p;
		int choose_operation;
		char loop_operation;
	public :
		product();
		void add_products();
		void delete_products();
		void search_products();


		

};

