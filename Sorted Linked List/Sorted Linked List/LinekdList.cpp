#include "LinkedList.h"

LinkedList::LinkedList()
{
	head = NULL;
}

LinkedList::~LinkedList()
{
	deleteAll();
}

bool LinkedList::isempty()
{
	if (head == NULL) {
		return true;
	}
	else {
		return false;
	}
}

void LinkedList::insert(int v)
{
	ListNode *node, *prevnode, *newnode;

	newnode = new ListNode;
	newnode->value = v;
	newnode->next = NULL;

	prevnode = NULL;
	node = head;

	if (head == NULL) {
		//First Position
		head = newnode;
	}
	else {
		while (node->value < v && node->next != NULL) {
			prevnode = node;
			node = node->next;
		}

		if (prevnode == NULL && v <= node->value) {
			//2nd position
			newnode->next = node;
			head = newnode;
		}
		else if (node->next == NULL && v >= node->value) {
			//Last Postion
			node->next = newnode;
		}
		else {
			//In the middle
			newnode->next = node;
			prevnode->next = newnode;
		}
	}
}

void LinkedList::remove(int a)
{
	ListNode *node;
	ListNode *prevnode;
	node = head;
	prevnode = head;
	while (node->value != a && node->next != NULL) {
		prevnode = node;
		node = node->next;
	}

	if (node->value == a) {
		if (prevnode == head) {
			head = head->next;
		}
		else {
			prevnode->next = node->next;
			delete node;
		}
	}
}

void LinkedList::deleteAll()
{
	ListNode* temp;
	while (head != NULL) {
		temp = head;
		head = head->next;
		delete temp;
	}
}

bool LinkedList::search(int a)
{
	ListNode *node;
	ListNode *prevnode;
	node = head;
	while (node->value != a && node->next != NULL) {
		node = node->next;
	}

	if (node->value == a) {
		return true;
	}

	return false;
}

void LinkedList::displayList()
{
	if (head != NULL) {
		ListNode* node;
		node = head;
		while (node->next != NULL) {
			cout << node->value << " ";
			node = node->next;
		}
		cout << node->value << " ";
	}
	else {
		cout << "List is empty ";
	}
}
