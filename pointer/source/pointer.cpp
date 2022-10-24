#include <stdio.h>
#include <pointer.h>

void hoanvi_koxai(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

void hoanvi(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void hoanvi_contro(int *a, int *b){
    int *temp =NULL;
    temp = a;
    a = b;
    b = temp;
}

void nhapPS1(phanso *ps1){
    int tu, mau;
    printf("nhap tu: \n");
    scanf("%d", &tu);
    do{
        printf("nhap mau: \n");
        scanf("%d", &mau);
    }while (mau == 0);

    phanso temp;
    temp.tu = tu;
    temp.mau = mau;

    ps1 = &temp;

    printf("dia chi o nho cua thuoc tinh %p", &ps1->tu); // con tro se tro den o nho bao boc tat ca cac thuoc tich trong struct
    printf("dia chi o nho cua thuoc tinh %p", &(*ps1).mau); // gia tri ma cai struct dang chua
    
}

void thaydoigiatri(int *&p){
    int i = 1;
    p = &i;
}

void thaydoigiatri(int **p){
    int i = 1;
    int *q =NULL;

    q = &i;
    p = &q;
}