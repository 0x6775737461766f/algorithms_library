#include <stdio.h>

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

int main(void) {
	int Array[] = {21, 33, 20, 19, 22 ,44, 79 ,10};
	int Length = sizeof(Array) / sizeof(Array[0]);
	int R = seqSearch(Array, Length, 20);
	printf("\n -> %d",R);
	bubbleSort(Array, Length);
	R = seqSearch(Array, Length, 20);
	printf("\n -> %d",R);
	printf("Bubble Sort - ");
	for (int i=0;i< Length;i++) {
		printf("%d | ",Array[i]);
	}
return 0;
}
