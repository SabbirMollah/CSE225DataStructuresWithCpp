
#include "UnsortedList.h"

UnsortedType::UnsortedType() {
	length = 0;
	currentPos = -1;
}
void UnsortedType::makeEmpty() {
	length = 0;
}
bool UnsortedType::isFull() {
	return (length == MAX_ITEMS);
}
int UnsortedType::getLength() {
	return length;
}
void UnsortedType::resetList() {
	currentPos = -1;
}
void UnsortedType::getNextItem(ItemType& item) {
	currentPos++;
	item = info[currentPos];
}
void UnsortedType::insertItem(ItemType item) {
	info[length] = item;
	length++;
}
void UnsortedType::deleteItem(ItemType item) {
	int location = 0;
	while (item.compareTo(info[location]) != EQUAL)
		location++;
	info[location] = info[length - 1];
	length--;
}
void UnsortedType::retrieveItem(ItemType& item, bool& found) {
	int location = 0;
	bool moreToSearch = (location <length);
	found = false;
	while (moreToSearch && !found) {
		switch (item.compareTo(info[location])) {
		case LESS:
		case GREATER:
			location++;
			moreToSearch = location <length;
			break;
		case EQUAL:
			found = true;
			item = info[location];
		}
	}
}

void UnsortedType::printList() {
	for (int i = 0; i<length; i++) {
		info[i].print();
		cout << " ";
	}
}
