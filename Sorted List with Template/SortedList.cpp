#include "SortedList.h"

template <class T>
SortedList<T>::SortedList(int size) {
	maxSize = size;
	data = new T[maxSize];
	length = 0;
	currentPos = -1;
}

template <class T>
void SortedList<T>::InsertItem(T item) {
	int location = 0;
	bool moreToSearch = (location<length);

	if(isFull()){
		return;
		//If list is already full, returns without any signal
	}
	while (moreToSearch) {
		if( item > data[location] ){
			location++;
			moreToSearch = (location<length);
		}
		else{
			moreToSearch = false;
		}	
	}
	for (int index = length; index>location; index--) {
		data[index] = data[index - 1];
	}
	data[location] = item;
	length++;
}

template <class T>
SortedList<T>::~SortedList() {
	delete[] data;
}

template <class T>
bool SortedList<T>::isFull(){
	return length==maxSize;
}

template <class T>
void SortedList<T>::ResetList() {
	currentPos = -1;
}

template <class T>
void SortedList<T>::GetNextItem(T& item) {
	currentPos++;
	item = data[currentPos];
}