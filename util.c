#include "util.h"

int seqSearch(int arr[], int size, int n) {
    if (size == 0) return -1;
    if (arr[size] == n) return size;
    return seqSearch(arr, size-1, n);
}

void bubbleSort(int Array[], int Length) {
	int temp;
	if (Length == 1) return;
	for (int i = 0; i < Length-1; i++) {
		if (Array[i] > Array[i+1]) {
			temp = Array[i];
			Array[i] = Array[i+1];
			Array[i+1] = temp;
		}
	}
	Length = Length-1;
	bubbleSort(Array, Length);
}