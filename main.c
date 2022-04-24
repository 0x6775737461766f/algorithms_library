#include <stdio.h>
#include "util.h"

void main() {
    int Array[] = {21, 33, 20, 19, 22 ,44, 79 ,10};
	int Length = sizeof(Array) / sizeof(Array[0]);
	int R = seqSearch(Array, Length, 20);
	printf("\n -> %d",R);
	bubbleSort(Array, Length);
	R = seqSearch(Array, Length, 20);
	printf("\n -> %d",R);
	printf("\nBubble Sort - ");
	for (int i=0;i< Length;i++) {
		printf("%d | ",Array[i]);
	}
}