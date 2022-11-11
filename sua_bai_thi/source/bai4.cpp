#include "stdio.h"

bool canJump(int a[], int size){
    int last_index = size -1;
    for (int i = size -2; i >=0; i--){
        if(a[i] + i >= last_index ){
            return 1;
        }
    }
    return 0;
}

