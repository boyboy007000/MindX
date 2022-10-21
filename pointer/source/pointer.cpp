#include <stdio.h>

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