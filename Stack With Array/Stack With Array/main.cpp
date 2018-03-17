#include <iostream>

#include "StackList.h"

using namespace std;

int main() {
	StackList list;

	ItemType item;
	item.setValue(100);
	list.push(item);
	cout << list.peek();

	getchar();
}