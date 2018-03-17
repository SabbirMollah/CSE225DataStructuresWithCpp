#ifndef QUELIST_H
#define QUELIST_H

//Circular Queue with Array

class QueFull {};
class QueEmpty {};

template <class T>
class QueList {
public:
	QueList(int);
	~QueList();
	void deleteAll();
	bool isEmpty();
	bool isFull();
	void enqueue(T);
	T dequeue();
	T peak();



private:
	T* info;
	int front;
	int rear;
	int maxQue;
};
#endif;