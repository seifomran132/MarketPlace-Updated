#pragma once
#include "seller.h"


class Globals
{
public:
	Globals(void);
	static vector<seller> sellers;
	void addSeller(seller s);
};
