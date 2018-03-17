#include "SortedList.h"

SortedList::SortedList() {
	length = 0;
	currentPos = -1;
}

void SortedList::makeEmpty() {
	length = 0;
}

bool SortedList::isFull() {
	return (length == MAX_ITEMS);
}

int SortedList::lengthIs() {
	return length;
}

void SortedList::resetList() {
	currentPos = -1;
}

void SortedList::getNextItem(ItemType& item) {
	currentPos++;
	item = info[currentPos];
}

void SortedList::insertItem(ItemType item) {
	int location = 0;
	bool moreToSearch = (location<length);

	while (moreToSearch) {
		switch (item.comparedTo(info[location])) {
		case EQUAL:
		case GREATER:
			location++;
			moreToSearch = (location<length);
			break;
		case LESS:
			moreToSearch = false;
			break;
		}
	}
	for (int index = length; index>location; index--) {
		info[index] = info[index - 1];
	}
	info[location] = item;
	length++;
}

void SortedList::deleteItem(ItemType item) {
	int location = 0;

	while (item.comparedTo(info[location]) != EQUAL) {
		location++;
	}
	for (int index = location + 1; index<length; index++) {
		info[index - 1] = info[index];
	}
	length--;
}

void SortedList::retrieveItem(ItemType& item, bool& found) {
	int midPoint;
	int first = 0;
	int last = length - 1;
	bool moreToSearch = first <= last;
	found = false;

	while (moreToSearch && !found) {
		midPoint = (first + last) / 2;
		switch (item.comparedTo(info[midPoint])) {
		case LESS:
			last = midPoint - 1;
			moreToSearch = first <= last;
			break;
		case GREATER:
			first = midPoint + 1;
			moreToSearch = first <= last;
			break;
		case EQUAL:
			found = true;
			item = info[midPoint];
			break;
		}
	}
}

void SortedList::printList() {
	for (int i = 0; i<length; i++) {
		cout << info[i].getValue() << " ";
	}
	cout << endl;
}
