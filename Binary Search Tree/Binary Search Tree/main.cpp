#include "BinarySearchTree.h"
#include <iostream>

using namespace std;

int main() {

	BinarySearchTree bst;

	for (int i = 0; i < 9; i++) {
		int x;
		cin >> x;
		bst.insert(x);
	}

	int y;
	cout<<"Search: ";
	cin >> y;
	if (bst.searchItem(y)) {
		cout << "Found" << endl; 
	}
	else cout << "Not Found" << endl;


	cout << "Search: ";
	cin >> y;
	if (bst.searchItem(y)) {
		cout << "Found" << endl;
	}
	else cout << "Not Found" << endl;

	cout << "Remove: ";
	cin >> y;
	bst.remove(y);
	if (bst.searchItem(y)) {
		cout << "Found" << endl;
	}
	else cout << "Not Found" << endl;



	///
	int myArray[] = { 13,-21,19,7,69,-71,33 };

	BinarySearchTree bst2;
	for (int i = 0; i < 7; i++) {
		bst2.insert(myArray[i]);
	}

	QueType<int> que;
	bst2.getInOrder(que);


	for(int i=0; i<7; i++) {
		que.Dequeue(myArray[i]);
		//myArray[i] = z;
		cout << myArray[i]<< " ";
	}


	cout << endl;
	cout << "Total Node number is " << bst.countNode();
	getchar(); getchar();
	getchar();
	return 0;
}