#ifndef ITEMTYPE_H
#define ITEMTYPE_H
#include <iostream>

const int MAX_ITEMS = 5;

class ItemType {
private:
	int value;
public:
	ItemType();
	ItemType(int);
	int getValue();
	void setValue(int);
};


#endif;#pragma once
