#include <stdio.h>
int Sum_array_element_even(int a[100], int size){
    int sum = 0;
    for(int i = 0; i < size; i++){
        if(a[i] % 2 ==0){
            sum += a[i];
        }
    }
    return sum;
}

void xuat_mang(int a[100], int size){
    printf("xuat mang");
    for(int i = 0; i < size; i++){
        printf("a[%d]: %d", i, a[i]);
    }
}

void change_array(int a[100], int size){
    a[0] = 100;
}

void change_array_last_element(int a[100]){
    a[99] = 0;
}