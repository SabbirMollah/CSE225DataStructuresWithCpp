#include <iostream>
#include "UnsortedList.h"

using namespace std;

int main()
{
	ItemType a, b, c, d;

	a.initialize(5);
	b.initialize(7);
	c.initialize(6);
	d.initialize(9);


	UnsortedType list1;
	list1.insertItem(a);
	list1.insertItem(b);
	list1.insertItem(c);
	list1.insertItem(d);


	list1.printList();

	
	cout << endl;
	cout << "Length is: " << list1.getLength() << endl;

	
	ItemType e;
	e.initialize(1);
	list1.insertItem(e);
	list1.printList();

	
	ItemType four;
	four.initialize(4);
	bool isFound;
	list1.retrieveItem(four, isFound);
	cout << endl;
	cout << "Found 4?: " << isFound << endl;

	
	cout << "List full status:" << list1.isFull();

	
	ItemType five;
	five.initialize(5);
	list1.deleteItem(five);
	cout << endl;
	cout << "Five Deleted" << endl;

	getchar();
}
