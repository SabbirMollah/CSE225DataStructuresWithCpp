#include <iostream>
#include "DynamicArray.cpp"

using namespace std;

int main()
{
	int defaultSize = 3;

	DynamicArray<int> intArray(defaultSize);

	for (int i = 0, data = 10; i<defaultSize; i++, data += 10) {
		intArray.insertItem(i, data);
	}

	int temp;
	cout << "Integers: ";

	for (int i = 0; i<defaultSize; i++) {
		temp = intArray.getItem(i);
		cout << temp << " ";
	}

	getchar();
}

