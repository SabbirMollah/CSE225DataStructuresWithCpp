#include <iostream>
#include "SortedList.h"

int main() {
	SortedList list;

	cout << "Length of the list is: " << list.lengthIs() << endl;

	ItemType a, b, c, d, e;
	a.initialize(5);
	b.initialize(7);
	c.initialize(4);
	d.initialize(2);
	e.initialize(1);

	list.insertItem(a);
	list.insertItem(b);
	list.insertItem(c);
	list.insertItem(d);
	list.insertItem(e);

	list.printList();

	ItemType f;
	f.initialize(6);
	bool found = false;
	list.retrieveItem(f, found);

	if (found) {
		cout << "6 Found";
	}
	else cout << "6 Not Found";

	ItemType g;
	g.initialize(5);
	found = false;
	list.retrieveItem(g, found);

	if (found) {
		cout << "5 Found";
	}
	else cout << "5 Not Found";

	bool listIsFull = list.isFull();
	if (listIsFull) {
		cout << "List is full" << endl;
	}
	else cout << "List not full" << endl;

	ItemType h;
	h.initialize(1);
	list.deleteItem(h);

	list.printList();

	listIsFull = list.isFull();
	if (listIsFull) {
		cout << "List is full" << endl;
	}
	else cout << "List not full" << endl;

	getchar();
	return 0;
}
