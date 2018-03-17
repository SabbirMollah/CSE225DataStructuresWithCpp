#ifndef UNSORTEDLIST_H_INCLUDED
#define UNSORTEDLIST_H_INCLUDED

#include "ItemType.h"

class UnsortedType {
public:
	UnsortedType();
	void makeEmpty();
	bool isFull();
	int getLength();
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

#endif // UNSORTEDLIST_H_INCLUDED

