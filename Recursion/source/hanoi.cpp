#include "stdio.h"


void chuyen(int n, char a, char c, char trung_gian){
    if (n == 1){
        printf("%c  ----- %c \n", a, c);
        return;
    }
    else{
        chuyen(n-1, a, trung_gian, c);
        printf("%c  ----- %c\n", a, c);
        chuyen(n-1, trung_gian, c, a);
    }
}