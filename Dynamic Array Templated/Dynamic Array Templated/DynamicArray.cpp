#include "DynamicArray.h"

template <class T>
DynamicArray<T>::DynamicArray(int size) {
	data = new T[size];
}

template <class T>
void DynamicArray<T>::insertItem(int index, T item) {
	data[index] = item;
}

template <class T>
T DynamicArray<T>::getItem(int index) {
	return data[index];
}

template <class T>
DynamicArray<T>::~DynamicArray() {
	delete[] data;
}
