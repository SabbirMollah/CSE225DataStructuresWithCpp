#include <iostream>
#include "LinkedList.h"

LinkedList::LinkedList() {
	head = NULL;
}

LinkedList::~LinkedList() {
	deleteAll();
}

bool LinkedList::isEmpty() {
	return head == NULL;
}

void LinkedList::insertNodeAtEnd(int value) {
	ListNode *newNode = new ListNode;
	newNode->value = value;
	newNode->next = NULL;
	if (head == NULL) {
		head = newNode;
	}
	else {
		ListNode *node;
		node = head;
		while (node->next != NULL) {
			node = node->next;
		}
		node->next = newNode;
	}

}

void LinkedList::insertNodeAtFront(int value) {
	ListNode *newNode = new ListNode;
	newNode->value = value;
	newNode->next = NULL;

	if (head == NULL) {
		head = newNode;
	}
	else {
		newNode->next = head;
		head = newNode;
	}
}

void LinkedList::insertNodeAtMiddle(int value, int prevValue) {
	ListNode *newNode = new ListNode;
	newNode->value = value;
	newNode->next = NULL;
	
	if (isEmpty()) {
		head = newNode;
	} 
	else {
		ListNode* node;
		node = head;
		
		
		while (node->value != prevValue && node->next != NULL) {
			node = node->next;
		}

		if (node->value == prevValue) {
			newNode->next = node->next;
			node->next = newNode;
		}
	}
}

void LinkedList::deleteNodeAtEnd() {
	if (head != NULL) {
		if (head->next == NULL) {
			delete head;
			head = NULL;
		}
		else {
			ListNode* prevnode;
			prevnode = head;

			ListNode* node;
			node = head;

			while (node->next != NULL) {
				prevnode = node;
				node = node->next;
			}

			prevnode->next = NULL;
			delete node;
		}
	}
}

void LinkedList::deleteNodeAtFront() {
	if (head != NULL) {
		ListNode* temp = head;
		head = head->next;
		delete temp;
	}
}

void LinkedList::deletetNodeAtMiddle(int value) {
	if (head != NULL) {
		ListNode *node;
		ListNode *prevnode;
		node = head;
		prevnode = head;
		while (node->value != value && node->next != NULL) {
			prevnode = node;
			node = node->next;
		}

		if (node->value == value) {
			if (prevnode == head) {
				head = node->next;
				delete node;
			}
			else {
				prevnode->next = node->next;
				delete node;
			}
		}
	}
}

void LinkedList::deleteAll() {
	ListNode* node;
	ListNode* prevNode;
	node = head;

	if (head == NULL) {
		return;
	}
	else if (head->next == NULL) {
		delete head;

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

bool LinkedList::search(int value) {
	ListNode *node;
	node = head;
	while (node->value != value && node->next != NULL) {
		node = node->next;
	}

	if (node->value == value){
		return true;
	}

	return false;
}

void LinkedList::displayList() {
	if (head != NULL) {
		ListNode* node;
		node = head;
		while (node->next != NULL) {
			std::cout << node->value << " ";
			node = node->next;
		}
		std::cout << node->value << std::endl;
	}
	else {
		std::cout << "List is empty ";
	}
}