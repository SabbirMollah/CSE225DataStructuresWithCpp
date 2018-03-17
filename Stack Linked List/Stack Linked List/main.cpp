#include "StackList.h"
#include <iostream>

using namespace std;

int main() {
	StackList list;

	list.push(10);
	list.push(11);
	list.push(12);
	list.push(13);
	cout << list.pop();
	cout << list.pop();
	cout << list.pop();



	getchar();
	return 0;
}