#ifndef DYNAMICARRAY_H_INCLUDED
#define DYNAMICARRAY_H_INCLUDED

//T is the ItemType
template <class T>
class DynamicArray {
private:
	T* data;
public:
	DynamicArray(int);
	~DynamicArray();
	void insertItem(int, T);
	T getItem(int);
};

#endif // DYNAMICARRAY_H_INCLUDED
