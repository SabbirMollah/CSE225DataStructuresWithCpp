#ifndef BST_H
#define BST_H
#include <iostream>
#include "QueType.cpp"

using namespace std;

class BinarySearchTree {
private:
	struct tree_node {
		tree_node* left;
		tree_node* right;
		int data;
	};
	tree_node* root;

	void fillInOrder(QueType<int>&, tree_node*);
	void fillPreOrder(QueType<int>&, tree_node*);
	void fillPostOrder(QueType<int>&, tree_node*);

public:
	BinarySearchTree();
	bool isEmpty();
	void insert(int);
	void remove(int);
	void print_inorder();
	void inorder(tree_node*);

	void print_preorder();
	void preorder(tree_node*);

	void print_postorder();
	void postorder(tree_node*);

	int countNode();
	int count(tree_node*);

	//2nd part

	bool searchItem(int);
	void makeTreeEmpty();
	~BinarySearchTree();
	void makeEmpty(tree_node*&);
	void getInOrder(QueType<int>&);
	void getPreOrder(QueType<int>&);
	void getPostOrder(QueType<int>&);
};

#endif;