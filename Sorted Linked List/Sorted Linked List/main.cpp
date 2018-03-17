#include <iostream>
#include "LinkedList.h"

using namespace std;

int main(void)
{
	LinkedList myList;
	int x;
	for (int i = 0; i <4; i++) {
		cin >> x;
		myList.insert(x);
	}

	myList.displayList();

	myList.remove(105);

	cout << endl;

	myList.displayList();

	cout << endl;

	if (myList.search(105)) {
		cout << "105 Found" << endl;
	}
	else {
		cout << "105 Not Found" << endl;
	}

	myList.deleteAll();

	myList.displayList();

	cout << endl;

	cout << myList.isempty() << endl;

	getchar();
	

	return 0;
}
