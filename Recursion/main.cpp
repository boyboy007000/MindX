#include "hanoi.h"
#include "8hau.h"
#include "stdio.h"

int main(){

    // char a ='A', b='B', c='C';
    // chuyen(3, a, c, b);
    int a[63][63];

    for(int i=0; i<64; i++){
        for (int j=0; j<64; j++){
                a[i][j] =0;
        }
    }

    if(Thu(a, 1, 0, 8)){
        printf("dat con hau vi tri 0 0 duoc");
    }
    return 0;
}