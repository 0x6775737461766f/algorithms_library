#include <stdio.h>

int seqSearch(int Array[], int X, int Size) {
    if (Size == 0) return -1;
    if (Array[Size] == X) return Size;
    return seqSearch(Array, X, Size);
}
