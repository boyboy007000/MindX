#include <stdio.h>

int * sequenceNumber(int l, int r){
    int a [100];
    bool flag = true;
    int start = l;
    int count = 1;
    if (l > 0 && l < 9){
        a[0] = l + 1;
        start = 10;
    }
    
    for ( int i = start; i < r; i++){
        while(i){
            int t1 = i%10;
            int t2 = (i/10)%10;
            if( t1-t2 == 1 ){
                i = i/10;
            }
            else{
                flag = false;
                break;
            }
        }
        if (flag){
            if(a[0] == l +1 ){
               a[count] = i;     
            }
            else{
                a[count - 1] = i;
            }
            
        }
    }
    
}