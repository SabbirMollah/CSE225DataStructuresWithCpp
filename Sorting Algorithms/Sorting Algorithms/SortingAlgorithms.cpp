#include "SortingAlgorithms.h"

void SortingAlgorithms::BubbleSort(int* arr, int size){
    bool swapped;
    do{
        swapped = false;
        for(int i=0; i<size-1; i++){
            if(arr[i]>arr[i+1]){
                swap(arr[i],arr[i+1]);
                swapped = true;
            }
        }
    }while(swapped);
}

void SortingAlgorithms::SelectionSort(int* arr, int size){
    int minimum;
    for(int i=0; i<size-1; i++){
        minimum = i;
        for(int j =i+1; j<size; j++){
            if(arr[minimum]>arr[j]){
                minimum = j;
            }
        }
        swap(arr[i], arr[minimum]);
    }
}

void SortingAlgorithms::InsertionSort(int* arr, int size){
    for(int j=0; j<size; j++){
        int key = arr[j];
        //insert arr[j] into the sorted sequence arr[0 to j-1
        int i = j-1;
        while(i>=0 && arr[i]>key){
            arr[i+1] = arr[i];
            i=i-1;
        }
        arr[i+1] = key;
    }
}

void SortingAlgorithms::MergeSort(int* arr, int leftIndex, int rightIndex){
    int mid;
    if(leftIndex<rightIndex){
        mid = (leftIndex+rightIndex)/2; ///
        MergeSort(arr,leftIndex,mid);
        MergeSort(arr,mid+1,rightIndex);

        MergeArrays(arr, leftIndex,mid,mid+1,rightIndex);
    }
}

void SortingAlgorithms::swap(int& a, int& b){
    int temp = a;
    a = b;
    b = temp;
}

void SortingAlgorithms::MergeArrays(int* arr, int begin1, int end1, int begin2, int end2){
	//This portion should be implemented with temp as a vector
	const int length = end2-begin1+1;
    int temp[length];
    int tempIndex = 0;
    int savebegin1 = begin1;

    while((begin1<=end1) && (begin2<=end2)){
        if(arr[begin1]<=arr[begin2]){
            temp[tempIndex] = arr[begin1];
            tempIndex++;
            begin1++;
        }
        else{
            temp[tempIndex] = arr[begin2];
            tempIndex++;
            begin2++;
        }
    }

    while(begin1<=end1){
        temp[tempIndex] = arr[begin1];
        begin1++;
        tempIndex++;
    }

    while(begin2<=end2){
        temp[tempIndex] = arr[begin2];
        begin2++;
        tempIndex++;
    }

    for(int i=0; i<length; i++){
        arr[savebegin1] = temp[i];
        savebegin1++;
    }
}
