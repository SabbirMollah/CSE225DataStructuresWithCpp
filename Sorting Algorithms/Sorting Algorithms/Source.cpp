#include <iostream>
#include "SortingAlgorithms.cpp"

using namespace std;

int main() {
	SortingAlgorithms sa;
	int arr1[] = { 9,8,7,25,69,78,-11,22 };
	int arr2[] = { 3,38,5,44,15,36,26,27,2,46,4,19,47,48,50 };
	int arr3[] = { 25,22,36,-7,38,5 };
	int arr4[] = { -13,115,38,5,44,15,36,26,27,2,46,4,19,47,49,55 };
	int size;

	size = 8;
	sa.BubbleSort(arr1, size);
	cout << "Bubble Sort: ";
	for (int i = 0; i<size; i++) {
		cout << arr1[i] << " ";
	}
	cout << endl;


	size = 15;
	sa.SelectionSort(arr2, size);
	cout << "Selection Sort: ";
	for (int i = 0; i<size; i++) {
		cout << arr2[i] << " ";
	}
	cout << endl;


	size = 6;
	sa.SelectionSort(arr3, size);
	cout << "Insertion Sort: ";
	for (int i = 0; i<size; i++) {
		cout << arr3[i] << " ";
	}
	cout << endl;

	size = 16;
	sa.MergeSort(arr4, 0, size - 1);
	cout << "Merge Sort: ";
	for (int i = 0; i<size; i++) {
		cout << arr4[i] << " ";
	}
	cout << endl;

	return 0;
}
