#ifndef SORTEDLIST_H_INCLUDED
#define SORTEDLIST_H_INCLUDED

//T is the ItemType
template <class T>
class SortedList {
private:
	T* data;
	int length;
	int maxSize;
	int currentPos;
	bool isFull();
public:
	SortedList(int);
	~SortedList();
	void InsertItem(T);
	void GetNextItem(T&);
	void ResetList();
};

#endif // SORTEDLIST_H_INCLUDED
