#include "stdio.h"

bool anToan(int a[63][63], int dong,int cot, int n){
    for(int i =0; i<dong; i++){
        if(a[i][cot])
        {
            return false;
        }
    }

    for(int i =dong, j= cot; i >=0 && j>=0; i--, j--){
        if(a[i][j])
        {
            return false;
        }
    }

    for(int i =dong, j= cot; i >=0 && j<n; i--, j++){
        if(a[i][j])
        {
            return false;
        }
    }
}

void PrintBoard(int n, int a[63][63]){
    for (int i = 0; i <n ; i++){
        for(int j = 0; j<n; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

bool Thu(int a[63][63],int dong,int cot, int n){

    if(dong == n){
        PrintBoard(n, a);
        return true;
    }

    bool result = false;
    for(int i =0; i<n; i++){
        if(anToan(a,dong, i, n)){
            a[dong][i] = 1;
            result = Thu(a, dong + 1, cot, n);
            a[dong][i] = 0;
        }
    }
    return result;

}