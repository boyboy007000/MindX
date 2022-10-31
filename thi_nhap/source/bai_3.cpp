#include <stdio.h>
#include <string.h>

void in_ngang(int input[], int size){
    char result[100][100];
    for (int i =0; i< size; i++){
        for(int j = 0; j< input[i]; j++){
            strcpy(result[i][j], "*");
        }
    }
}


void in_doc(int input[], int size){
    char result[100][100];
    for(int i = 0 ; i< size; i++){
        for(int j = 0; j< input[i]; j++){
            result[j][i] = "*";
        }
    }
}