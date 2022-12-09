#include "swap.h"


int partition(int *arr, int left, int right){
    int i = left, j = right;
    int x = arr[left + ((right - left) /2)];
    while (i <= j)
    {
        if (arr[i] < x){
            i++;
        }
        else{
            swap(arr[i], arr[j]);
            j--;
        }
    }
    return j;
    
}

void quickSort(int *arr, int left, int right){
    if (left < right){
        int pos = partition(arr, left, right);

        quickSort(arr, left, pos -1);
        quickSort(arr, pos +1, right);
    }
}
