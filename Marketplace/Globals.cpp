#include "Globals.h"

vector<seller> Globals::sellers;


Globals::Globals(void) {

}

void Globals::addSeller(seller s) {
	this->sellers.push_back(s);
}