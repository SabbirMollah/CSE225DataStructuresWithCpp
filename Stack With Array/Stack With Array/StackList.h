#ifndef STACKLIST_H
#define STACKLIST_H
#include "ItemType.h"

class StackFull {};
class StackEmpty {};

class StackList {
private:
	int top;
	ItemType items[MAX_ITEMS];
public:
	StackList();
	bool isFull();
	bool isEmpty();
	void push(ItemType);
	ItemType pop();
	int peek();
};

#endif;