#ifndef QUEUETYPE_H_INCLUDED
#define QUEUETYPE_H_INCLUDED

class FullQueue {};
class EmptyQueue {};

template <class ItemType>

class QueType {
	struct NodeType {
		ItemType info;
		NodeType* next;

	};
public:
	QueType();
	~QueType();
	void MakeEmpty();
	void Enqueue(ItemType);
	void Dequeue(ItemType&);
	bool IsEmpty();
	bool IsFull();
	int GetLength();

private:
	NodeType *front, *rear;
	int length;
};


#endif // QUEUETYPE_H_INCLUDED
