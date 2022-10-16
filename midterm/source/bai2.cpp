#include <stdio.h>

int findab(int m, int n){
    int count = 0;
    if ((m < 10 && n > 99) || (m > 99 && n < 10)){
        return 0;
    }
    else{
        for (int i = m; i <= n; i++){
            int a = i % 10;
            int b = i / 10; 
            if ( (a*b) == (2*(a+b))  ){
                count++;
            }
        }
    }
    return count;
}