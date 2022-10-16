#include <stdio.h>

int sum_divisor(int n){
    int sum =0;
    printf("cac uoc so cua %d chia het cho 3: ", n);
    for (int i = 3; i <= n; i+=3){
        if (n % i == 0){
            printf("%d ", i);
            sum += i;
        }
    }
    return sum;
}