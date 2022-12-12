#include <stdlib.h>


bool compare(int n1, int n2, int x){
    if ( abs(n1 -x) <=  abs(n2 -x))
    {
        return true;
    }
    return false;
}
// 1 2 3 4 5 k = 4, x =3

// 1 5 10 12 13

// sap xep mang
void findClosestElements( int *a, int size, int k, int x){
    int result[k];
    for (int i = 0; i < k -1; i++){

        result[i] = a[i];
    }
    //print result
}


void findClosestElements_binary_search (int *a, int size, int k, int x){
    int left = 0, right = size - k;
    int result[k];
    while (left < right){
        int mid = (left + right ) /2;
        if (x - a[mid] > a[mid + k] - x){
            left = mid + 1;
        }
        else{
            right = mid;
        }
    }

    for ( int i = 0; i < k - 1; i ++){
        result[0] =  a[left + i];
    }
}

void findClosestElements_custom (int *a, int size, int k, int x){
    int i =0, j = size - 1;
    int remove = size - k;
    while(remove > 0){
        if (remove == 1){
            if ( x - a[i]> a[j] - x){
                i++;
            }
            else{
                j--;
            }
            remove--;
        }
        else{
            if (x - a[i + remove / 2 -1] > a[ j - remove /2 + 1] -x){
                i += remove /2 ;
            }
            else{
                j -= remove/2;
            }
            remove -= remove /2;
        }
        // i -> k thu tu cua mang a
    }
}