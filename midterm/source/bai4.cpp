#include <stdio.h>
#include <math.h>

bool check_prime(int n){
    if (n < 2){
        return 0;
    }
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0){
            return 0;
        }
    }
    return 1;
}

int count_prime(int n){
    if (n <= 1){
        return 0;
    }
    if (n == 2){
        return 1;
    }
    int count = 0;
    for (int i =3; i<=n; i++){
        if (check_prime(i)){
            printf("%d ", i);
            count++;
        }
    }
    return count;
}