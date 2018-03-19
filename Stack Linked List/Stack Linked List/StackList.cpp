#include "StackList.h"

StackList::StackList() {
	top = NULL;
}

StackList::~StackList() {
	deleteAll();
}

void StackList::push(int value) {
	ListNode* newNode = new ListNode;
	newNode->value = value;
	newNode->next = NULL;
	if (top == NULL) {
		top = newNode;
	}
	else {
		newNode->next = top;
		top = newNode;
	}
}

int StackList::pop() {
	if (top != NULL) {
		ListNode* temp;
		temp = top;
		int x = temp->value;
		temp = top;
		top = top->next;
		delete temp;
		return x;
	}
	else {
		throw StackEmpty();
	}

}

bool StackList::isEmpty() {
	return top == NULL;
}

int StackList::peak() {
	return top->value;
}

void StackList::deleteAll() {
	ListNode* node;
	ListNode* prevNode;
	node = top;

    if(top==NULL){
        return;
    }
	else if (top->next == NULL) {
		delete top;
	}
	else {
		while (node->next != NULL) {
			prevNode = node;
			node = node->next;
			delete prevNode;
		}
		delete node;
	}
}
