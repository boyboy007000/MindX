#include "swap.h"

void SelectionSort(int a[], int n){
    int i, min = 0;
    for (i = 0; i < n-1; i++){
        min = i;
        for (int j = i + 1; j < n; j ++){
            if (a[j] < a[min]){
                min = j;
            }
        }
        swap(a[i], a[min]);
    }
}

void dummySelectionSort(int a[], int n){
    for (int i =0 ; i< n-1; i++){
        for (int j = i+1; j<n ; j++){
            if(a[i]> a[j]){
                swap(a[i], a[j]);
            }
        }
    }
}
// de quy selection sort