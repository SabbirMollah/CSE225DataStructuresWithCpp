#include "ItemType.h"


ItemType::ItemType() {
	value = 0;
}

ItemType::ItemType(int v) {
	value = v;
}

int ItemType::getValue() {
	return value;
}

void ItemType::setValue(int v) {
	value = v;
}
