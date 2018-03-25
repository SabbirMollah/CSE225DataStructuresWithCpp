#include "queuetype.cpp"
#include <iostream>

using namespace std;

int main() {
	QueType<int> list;
	int x;

	if (list.IsEmpty()) {
		cout << "Queue is empty" << endl;
	}
	else {
		cout << "Queue is not empty" << endl;
	}

	for (int i = 0; i<4; i++) {
		cin >> x;
		list.Enqueue(x);
	}

	if (list.IsEmpty()) {
		cout << "Queue is empty" << endl;
	}
	else {
		cout << "Queue is not empty" << endl;
	}

	if (list.IsFull()) {
		cout << "Queue is full" << endl;
	}
	else {
		cout << "Queue is not full" << endl;
	}

	cin >> x;
	list.Enqueue(x);

	int length = list.GetLength();

	for (int i = 0; i<length; i++) {
		int x;
		list.Dequeue(x);
		cout << x << " ";
		list.Enqueue(x);
	}

	if (list.IsFull()) {
		cout << "Queue is full" << endl;
	}
	else {
		cout << "Queue is not full" << endl;
	}

	cin >> x;
	list.Enqueue(x);



	list.Dequeue(x);
	list.Dequeue(x);
	list.Dequeue(x);
	cout << endl << "Length:" << list.GetLength() << endl;
	for (int i = 0; i<list.GetLength(); i++) {
		int x;
		list.Dequeue(x);
		cout << x << " ";
		list.Enqueue(x);
	}


	list.Dequeue(x);
	list.Dequeue(x);



	try {
		list.Dequeue(x);
	}
	catch (...) {
		cout << "Queue UnderFlow" << endl;
	}


	return 0;
}

