#include "seller.h"
#include<string>
#include <iostream>
using namespace std;


deque<OrderDetails> seller::orders;
seller::seller(string name, string email, string password)
	:user(name, email, password)
{

}
product_type seller::addingProduct()
{

	sel.seller_id = this->id;
	cout << "entre product id:";
	cin >> sel.id;
	cout << "\nentre product name :";
	cin >> sel.name;
	cout << "\n entre product price :";
	cin >> sel.price;
	cout << "\n entre product quantity:";
	cin >> sel.quantity;
	cout << "\n entre product category:";
	cin >> sel.category;
	pro.add_products(sel);
	return sel;
}
 void seller::deletProduct()
{
	int x;
	cout << "entre id to delete";
	cin >> x;
	pro.delete_products(x);
}
 void seller::UpdateProduct(int idToBeUpdated)
 {
	cout << "welcome in updating....";
	int x;
	for (int count = 0; count <= proloop.prod.capacity()-1; count++)
		 {


			 if (proloop.prod[count].id == idToBeUpdated)
			 {
				 cout << "\n 1 to update ID\n 2 to update name\n 3 to update price \n 4 to update category \n 5 to update quantity \n 6 to update seller ID " << endl;
				 cin >> x;
				 switch (x)
				 {
				 case 1: {
					 int newId;
					 cout << "old id:\t";
					 cout << proloop.prod[count].id;
					 cout << "\nentre new id :";
					 cin >> newId;
					 proloop.prod[count].id = newId;
					 break; }
				 case 2: {
					 string newname;
					 cout << "entre new name :";
					 cin >> newname;
					 proloop.prod[count].name = newname;
					 break; }
				 case 3:
				 {
					 double newPrice;
					 cout << "entre new price:";
					 cin >> newPrice;
					 proloop.prod[count].price = newPrice;
					 break;
				 }
				 case 4: {
					 string newCategory;
					 cout << "entre new category:";
					 cin >> newCategory;
					 proloop.prod[count].category = newCategory;
					 break; }
				 case 5:
				 {
					 int newquntity;
					 cout << "entre new quntity:";
					 cin >> newquntity;
					 proloop.prod[count].quantity = newquntity;
					 break;
				 }
				 case 6:
				 {int newId;
				 cout << "entre new ID:";
				 cin >> newId;
				 proloop.prod[count].seller_id = newId;
				 break;
				 }
				 }
			 }
			 else
			 {
				 cout << "sorry product not found";
			 }
		 }
}
 void seller::showOrder(orders)
 {
	 for (int i; i < orders.size(); i++)
	 {
		 cout << "customer name :" << orders[i].name << endl;
		 cout << "customer adress :" << orders[i].address << endl;
		 cout << "customer phone :" << orders[i].phone << endl;
		 cout << "product ID :" << orders[i].products[i].id << endl;
		 cout << "product name :" << orders[i].products[i].name << endl;
		 cout << "product category :" << orders[i].products[i].category << endl;
		 cout << "product price :" << orders[i].products[i].price << endl;
		 cout << "product quentity :" << orders[i].products[i].quantity << endl;
		 cout << "product Seller Id :" << orders[i].products[i].seller_id << endl;
	 }
 }