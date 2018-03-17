#ifndef LINKEDLIST_H_INCLUDED
#define LINKEDLIST_H_INCLUDED

#include "ListNode.h"

class LinkedList {
private:
	ListNode* head;
public:
	LinkedList();
	~LinkedList();
	bool isEmpty();
	void insertNodeAtEnd(int);
	void insertNodeAtFront(int);
	void insertNodeAtMiddle(int, int);
	void deleteNodeAtEnd();
	void deleteNodeAtFront();
	void deletetNodeAtMiddle(int);
	void deleteAll();
	bool search(int);
	void displayList();
};


#endif // !LISTNODE_H_INCLUDED
