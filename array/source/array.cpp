#include <stdio.h>

void khai_bao_ma_tran(){
    typedef int matran[10];

    matran ar1 = {1,2,3,4,5}; // int ar1[10];
    
    for (int i = 0; i< 10; i ++){
        printf("phan tu thu %d: %d ", i, ar1[i]);
    }
}

void khai_bao_mang_cua_mang(){
    typedef int array[3];

    array matrix[] = {4, 5, 6};// array[0]

    // cot1[0][0] = 100;

    printf("phan tu thu nhat cua mang 1 %d", matrix[0][2]);

}

void khai_bao_mang_tuong_minh(){
    // int matrix[3][2];

    int matrix_a [][3] = {1,2,3,4,5,6,7,8,9,0}; 
    typedef int matran[3][2];
    matran a = {{1,2}, {3,4}, {5,6}};

    // matrix[0][0] = 100;
    // matrix[0][1] = 200;
    printf("phan tu thu nhat cua ma tran %d ", matrix_a[0][3]);
    printf("phan tu thu nhat cua ma tran %d ", a[1][0]);

}

typedef int matrix[10][10];

void nhap_mang(matrix & mt1, int & dong, int & cot)//tham bien, tham tri
{
    printf("nhap so dong: ");
    scanf("%d", &dong);

    printf("nhap so cot: ");
    scanf("%d", &cot);

    for (int i = 0; i < dong; i++){
        for (int j =0; j< cot; j++){
            printf("nhap gia tri cua phan tu a[%d][%d]:", i,j);
            scanf("%d", &mt1[i][j]);
        }
    }
}

void xuat_mang(matrix mt1, int dong, int cot){
        for (int i = 0; i < dong; i++){
        for (int j =0; j< cot; j++){
           printf("nhap gia tri cua phan tu a[%d][%d]: %d", i,j,mt1[i][j]);
           
        }
    }
}