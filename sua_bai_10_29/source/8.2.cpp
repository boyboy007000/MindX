#include <stdio.h>

int sum_row(int matrix[10][10], int row)
{
    int sum =0;
    for(int i =0; i< 10; i++){
        
            sum += matrix[i][row];
        
    }

    return sum;
}

int sum_col(int matrix[10][10], int col){
    int sum =0;
        for(int i =0; i< 10; i++){
       
            sum += matrix[col][i];
        
    }

    return sum;
}

bool check_element(int matrix[10][10]){

    for (int i = 0 ; i < 10; i++){
        for (int j = 0; j <10; j++){
            if (sum_col(matrix, i) == sum_row(matrix, j)){
                printf("%d", matrix[i][j]);
            }
        }
    }
    
}