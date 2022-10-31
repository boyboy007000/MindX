#include <bai_1.h>

int * sumOfThree(int n){
    int a[3] = {0};
    if ( n % 3 == 0){
        return; 
    }
    else{
        //  a[0] = n/3 -1 ;a[1] = n/3 ; a[2] = n/3 +1 
        for (int i = 0; i < n - 3; i++){
            if(( ((i + 1) + (i +2)  +i) ) == n ){
                a[0] = i;
                a[1] = i + 1;
                a[2] = i + 2;
            }
        }
    }
    return a;
}