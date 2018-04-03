#include <iostream>
#include "PQType.cpp"

using namespace std;

int main() {
	int x;
	PQType<int> q(10);

	if (q.IsEmpty())
		cout << "Queue is Empty" << endl;
	else
		cout << "Queue is not Empty" << endl;

	for (int i = 0; i<10; i++) {
		cin >> x;
		q.Enqueue(x);
	}

	q.PrintQueue();

	q.Dequeue(x);
	cout << x << endl;

	q.Dequeue(x);
	cout << x << endl;

	q.PrintQueue();

	q.Dequeue(x);
	q.Dequeue(x);
	q.Dequeue(x);
	q.PrintQueue();

	return 0;
}
