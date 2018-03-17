#ifndef STACKLIST_H
#define STACKLIST_H

#include <iostream>

class StackEmpty { /*For throwing error */ };

class ListNode {
	public:
	int value;
	ListNode* next;
};

class StackList{
	private:
	ListNode* top;

	public:
	StackList();
	~StackList();
	void push(int);
	int pop();
	bool isEmpty();
	int peak();
	void deleteAll();
};

#endif;