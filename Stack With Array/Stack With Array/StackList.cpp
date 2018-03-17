#include "StackList.h"

StackList::StackList() {
	top = -1;
}

bool StackList::isFull() {
	return (top = MAX_ITEMS - 1);
}

bool StackList::isEmpty() {
	return top == -1;
}

void StackList::push(ItemType a) {
	if (isFull()) {
		throw StackFull();
	}
	top++;
	items[top] = a;
}

ItemType StackList::pop() {
	if (isEmpty()) {
		throw StackEmpty();
	}
	else {
		top--;
		return items[top + 1];
	}
}

int StackList::peek() {
	return items[top].getValue();
}