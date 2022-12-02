#include "InsertionSort.h"
#include "stdio.h"

int main(){
    int a[] = {15,2,8,7,3,6,9,17};
    InserttionSort(a, 8);
    for (int i =0; i<8; i++){
        printf("%d ", a[i]);
    }
    return 0;
}