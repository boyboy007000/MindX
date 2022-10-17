#include <stdio.h>

int gcd(int a, int b){
    while(b){
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}