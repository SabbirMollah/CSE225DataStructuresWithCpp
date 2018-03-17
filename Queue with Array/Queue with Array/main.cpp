#include <iostream>
#include "QueList.cpp"

using namespace std;

void displayQue(QueList<int>& list) {
	QueList<int> temp(5);
	while (!(list.isEmpty())) {
		temp.enqueue(list.dequeue());
		//cout << list.dequeue();
	}
	while (!(temp.isEmpty())) {
		int x = temp.dequeue();
		cout << x << " ";
		list.enqueue(x);
	}
}

int main() {
	QueList<int> list(5);

	if (list.isEmpty()) {
		cout<<"Empty"<<endl;
	}
	else {
		cout << "Not Empty";
	}

	list.enqueue(10);
	list.enqueue(20);
	list.enqueue(30);
	list.enqueue(40);
	list.enqueue(50);


	cout << list.dequeue() << " ";

	while (!list.isEmpty()) {
		cout << list.dequeue() << " ";
	}

	

	if (list.isFull()) {
		cout << "Full" << endl;
	}
	else {
		cout << "Not Full";
	}


	

	getchar();
	return 0;
}