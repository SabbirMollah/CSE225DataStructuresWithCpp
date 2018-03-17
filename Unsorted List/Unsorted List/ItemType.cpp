#include "ItemType.h"

ItemType::ItemType() {
	value = 0;
}

RelationType ItemType::compareTo(ItemType otherItem) {
	if (value < otherItem.getValue()) return LESS;
	else if (value> otherItem.getValue()) return GREATER;
	else return EQUAL;
}

void ItemType::initialize(int number) {
	value = number;
}

void ItemType::print() {
	cout << value << " ";
}

int ItemType::getValue() {
	return value;
}

