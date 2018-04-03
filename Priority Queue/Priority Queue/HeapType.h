#ifndef HEAPTYPE_H_INCLUDED
#define HEAPTYPE_H_INCLUDED

template <class ItemType>
struct HeapType {
	void ReheapUp(int root, int bottom);
	void ReheapDown(int root, int bottom);
	ItemType* elements;
	int numElements;
};

#endif // HEAPTYPE_H_INCLUDED
