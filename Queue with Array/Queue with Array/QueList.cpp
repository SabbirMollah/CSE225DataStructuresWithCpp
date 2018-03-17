#include "QueList.h"

template <class T>
QueList<T>::QueList(int max) {
	maxQue = max;
	front = -1;
	rear = -1;
	info = new T[max];
}

template <class T>
QueList<T>::~QueList() {
	delete[] info;
}

template <class T>
bool QueList<T>::isEmpty() {
	return front == -1;
}

template <class T>
bool QueList<T>::isFull() {
	return ((rear + 1) % maxQue == front);
}

template <class T>
void QueList<T>::deleteAll() {
	front = -1;
	rear = -1;
}

template <class T>
void QueList<T>::enqueue(T item) {
	if (isFull()) {
		throw QueFull();
	}
	else {
		rear = (rear + 1) % maxQue;
		info[rear] = item;
	}
	if (front == -1) {
		front = 0;
	}
}

template <class T>
T QueList<T>::dequeue() {
	if (isEmpty()) {
		throw QueEmpty();
	}

	int i = front;
	if (front == rear) {
		deleteAll();
	}
	else{
		front = (front + 1) % maxQue;
	}
		
	return info[i];
	
}

template <class T>
T QueList<T>::peak() {
	if (front == -1)
		throw QueEmpty();
	return info[front];
}


