#include "BinarySearchTree.h"

BinarySearchTree::BinarySearchTree() {
	root = NULL;
}

bool BinarySearchTree::isEmpty() {
	if (root == NULL) {
		return true;
	}
	return false;
}

void BinarySearchTree::insert(int d) {
	tree_node* t = new tree_node;
	t->data = d;
	t->left = NULL;
	t -> right = NULL;

	tree_node* parent;
	parent = NULL;

	//Is a new tree?

	if (isEmpty()) {
		root = t;
	}
	else {
		tree_node* curr;
		curr = root;

		while (curr) {
			parent = curr;
			if (t->data > curr->data) {
				curr = curr->right;
			}
			else {
				curr = curr->left;
			}
		}

		if (t->data < parent->data) {
			parent->left = t;
		}
		else {
			parent->right = t;
		}
	}
}

void BinarySearchTree::remove(int d) {
	bool found = false;
	if (isEmpty()) {
		cout << "This tree is Empty" << endl; 
		return;
	}

	tree_node* curr;
	tree_node* parent = NULL;
	curr = root;
	while (curr != NULL) {
		if (curr->data == d) {
			found = true;
			break;
		}
		else {
			parent = curr;
			if (d > curr->data) {
				curr = curr->right;
			}
			else {
				curr = curr->left;
			}
		}
	}

	if (!found) {
		cout << "Data Not found!" << endl;
		return;
	}

	//3 Cases here:
	//We are removing leaf
	//removing node with one child
	//Removing node with 2 child


	//Single node case
	if ( (curr->left == NULL && curr->right != NULL) || (curr->left != NULL && curr->right==NULL)) {
		if (curr->left == NULL && curr->right != NULL) {
			if (parent->left == curr) {
				parent->left = curr->right;
				delete curr;
			}
			else {
				parent->right = curr->right;
				delete curr;
			}
		}
		else {
			if (parent->left == curr) {
				parent->left = curr->left;
				delete curr;
			}
			else {
				parent->right = curr->left;
				delete curr;
			}
		}
		return;
	}


	//Leaf Node
	if (curr->left == NULL && curr->right == NULL) {
		if (parent->left == curr) {
			parent->left = NULL;
		}
		else {
			parent->right = NULL;
		}
		delete curr;
		return;
	}

	//Node with 2 child
	if (curr->left != NULL && curr->right != NULL) {
		tree_node* chkr;
		chkr = curr->right;

		if ((chkr->left == NULL) && (chkr->right == NULL)) {
			curr->data = chkr->data;
			delete chkr;
			curr->right = NULL;
		}

		else {
			//Right child haschildren
			if ((curr->right)->left != NULL) {
				tree_node* lcurr;
				tree_node* lcurrp;
				lcurrp = curr->right;
				lcurr = (curr->right)->left;

				while (lcurr->left != NULL) {
					lcurrp = lcurr;
					lcurr = lcurr->left;
				}

				curr->data = lcurr->data;
				delete lcurr;
				lcurrp->left = NULL;
			}
			else {
				tree_node* tmp;
				tmp = curr->right;
				curr->data = tmp->data;
				curr->right = tmp->right;
				delete tmp;
			}
		}

		return;
	}

}

void BinarySearchTree::print_inorder() {
	inorder(root);
	cout<<endl;
}

void BinarySearchTree::inorder(tree_node* p) {
	if (p != NULL) {
		if (p->left) {
			inorder(p->left);
		}
		cout << " " << p->data << " ";
		if (p->right) {
			inorder(p->right);
		}
	}
	else return;
}

void BinarySearchTree::print_postorder() {
	postorder(root);
	cout << endl;
}

void BinarySearchTree::postorder(tree_node* node) {
	if (node != NULL) {
		if (node->left) postorder(node->left);
		if (node->right) postorder(node->right);
		cout << node->data << " ";
	}
	else return;
}

void BinarySearchTree::print_preorder() {
	preorder(root);
	cout << endl;
}

void BinarySearchTree::preorder(tree_node* node) {
	if (node != NULL) {
		cout << node->data << " ";
		if (node->left) postorder(node->left);
		if (node->right) postorder(node->right);
		
	}
	else return;
}

int BinarySearchTree::countNode() {
	return count(root);
}

int BinarySearchTree::count(tree_node* node) {
	if (node != NULL) {
		int sum = 1;
		if (node->left) {
			sum += count(node->left);
		}
		if (node->right) {
			sum += count(node->right);
		}
		return sum;
	}
	else return 0;
}

bool BinarySearchTree::searchItem(int x) {
	if (root == NULL) {
		return false;
	}
	else {
		tree_node* temp;
		temp = root;

		bool found = false;

		while ((!found) && (temp != NULL)) {
			if (x < temp->data) {
				temp = temp->left;
			}
			else if (x > temp->data) {
				temp = temp->right;
			}
			else {
				found = true;
			}
		}
		temp = NULL;
		return found;
	}
}

BinarySearchTree::~BinarySearchTree() {
	makeEmpty(root);
}

void BinarySearchTree::makeEmpty(tree_node*& p) {
	if (p != NULL) {
		if (p->left) makeEmpty(p->left);
		if (p->right) makeEmpty(p->right);
		delete p;
		p = NULL;
	}
}

void BinarySearchTree::makeTreeEmpty() {
	makeEmpty(root);
}

void BinarySearchTree::getInOrder(QueType<int>& q) {
	if (!q.IsEmpty()) q.MakeEmpty();
	fillInOrder(q, root);
}

void BinarySearchTree::getPreOrder(QueType<int>& q) {
	if (!q.IsEmpty()) q.MakeEmpty();
	fillPreOrder(q, root);
}

void BinarySearchTree::getPostOrder(QueType<int>& q) {
	if (!q.IsEmpty()) q.MakeEmpty();
	fillPostOrder(q, root);
}

void BinarySearchTree::fillInOrder(QueType<int>& q, tree_node* p) {
	if (p != NULL) {
		if (p->left) fillInOrder(q, p->left);
		q.Enqueue(p->data);
		//std::cout << "Enquing " << p->data << std::endl;
		if (p->right) fillInOrder(q, p->right);
	}
	else return;
}

void BinarySearchTree::fillPreOrder(QueType<int>& q, tree_node* p) {
	if (p != NULL) {
		q.Enqueue(p->data);
		if (p->left) fillInOrder(q, p->left);
		if (p->right) fillInOrder(q, p->right);
	}
	else return;
}

void BinarySearchTree::fillPostOrder(QueType<int>& q, tree_node* p) {
	if (p != NULL) {
		if (p->left) fillInOrder(q, p->left);
		if (p->right) fillInOrder(q, p->right);
		q.Enqueue(p->data);
	}
	else return;
}