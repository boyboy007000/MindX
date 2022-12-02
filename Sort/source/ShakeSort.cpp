#include "swap.h"

void ShakeSort(int a[], int n){
    int left, right, k, j;
    left = 1;
    right = n -1;
    do{
        for (j = right; j >= left; j--){
            if(a[j-1] > a[j]){
                swap(a[j], a[j-1]);
                k = j;
            }
        }

        left = k + 1;

        for( j = left; j <= right; j++){
            if(a[j-1] > a[j]){
                swap(a[j], a[j-1]);
            }
        }

        right = k-1;
    }while (left <= right);

}