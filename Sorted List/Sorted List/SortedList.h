#ifndef SORTEDTYPE_H_INCLUDED
#define SORTEDTYPE_H_INCLUDED

#include "ItemType.h"

class SortedList {
public:
	SortedList();
	void makeEmpty();
	bool isFull();
	int lengthIs();
	void resetList();
	void getNextItem(ItemType&);
	void insertItem(ItemType);
	void retrieveItem(ItemType&, bool&);
	void deleteItem(ItemType);
	void printList();

private:
	int length;
	ItemType info[MAX_ITEMS];
	int currentPos;
};


#endif // SORTEDTYPE_H_INCLUDED
