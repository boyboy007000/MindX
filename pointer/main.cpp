#include <stdio.h>
#include "pointer.h"

int main(){
    // int *p = NULL;// day la bien com tro
    // int so = 100;//bien binh thuong
    // p = &so;//lay dia chi o nho cua bien so cho con tro p

    // printf("truy xuat den dia chi vung nho con tro dang luu tru %p dia chi cua bien so %p \n", p, &so);

    // printf("truy xuat den dia chi cua con tro %d tuong tu nhu bien so %d \n", *p, so);

    // printf("truy xuat den dia chi cua con tro %p\n", &p);

    // int a = 5, b = 6;
    // printf("gia tri cua a,b truoc khi hoan vi: %d, %d \n", a,b);
    // hoanvi(a,b);
    // printf("gia tri cua a,b sau khi hoan vi: %d, %d \n", a,b);
    // hoanvi_contro(&a, &b);
    // printf("gia tri cua a,b sau khi hoan vi kieu con tro: %d, %d \n", a,b);

    // int array[] = {1,2,3};
    // int *p = NULL;
    // p = array;

    // printf("dia chi o nho cua bien array %p, %p, %p \n", &array, array, &array[2]);

    // printf("dia chi o nho cua bien array %p, %p, %p, %p \n", &array, array, &array[0], p);

    // printf("dia chi o nho cua bien phan tu thu 2 cua array %p, %p\n", &array[1], p + 1);

    // printf("gia tri cua o nho cua bien phan tu thu 2 cua array %d, %d\n", array[2], *(p + 2));

    // printf("do lon cua kieu du lieu int, float, double, long, char %d\n", sizeof(char));

    // // printf("do lon cua mang array dang chiem dung %d", (sizeof(&array[0]) - sizeof(&array[2]))* sizeof(int));

    // printf("do lon cua mang array dang chiem dung %d", sizeof(array));

    // printf("do lon cua mang array dang chiem dung %d", sizeof(array) / sizeof(array[0]));

    // phanso *ps1;
    // nhapPS1(ps1);
    // int *p;
    // int i;
    // p = &i;
    // *p = 1;// con tro p chi den 1 o nho 

    int *p = NULL;
    // thaydoigiatri(*&p);
    // printf("gia tri con tro p dang co: %d", *p);
    // printf("dia chi con tro p dang co: %p", p);

    thaydoigiatri(&p);
    // printf("gia tri con tro p dang co: %d", *p);
    printf("dia chi con tro p dang co: %p", p);

    return 0;
}