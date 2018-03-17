#include <iostream>
#include "LinkedList.h"

using namespace std;

int main(void)
{
	LinkedList myList;
	int x;

	for (int i = 1; i <= 4; i++) {
		cin >> x;
		myList.insertNodeAtFront(x);
	}

	myList.displayList();

	cout << endl;

	for (int i = 1; i <= 3; i++) {
		cin >> x;
		myList.insertNodeAtEnd(x);
	}

	myList.displayList();

	cout << endl;

	cin >> x;

	myList.insertNodeAtMiddle(x, 5);

	myList.displayList();

	cout << endl;

	myList.deleteNodeAtFront();

	myList.displayList();

	cout << endl;

	myList.deleteNodeAtEnd();

	myList.displayList();

	cout << endl;

	myList.deletetNodeAtMiddle(5);

	myList.displayList();

	cout << endl;

	getchar();
	getchar();
	return 0;
}
