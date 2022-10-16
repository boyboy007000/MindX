#include <stdio.h>
#include "bai1.h"
#include "bai2.h"
#include "bai3.h"
#include "bai4.h"
#include "bai5.h"
#include <iostream>

int main(){

    printf("ket qua bai 1: %d \n", gcd(5,6));
    printf("ket qua bai 2: %d \n",findab(35, 40));
    printf("ket qua bai 3: %d \n", sum_divisor(12));
    printf("ket qua bai 4: %d \n", count_prime(12));
    // printf("ket qua bai 5: %s \n", listItemsInBill(15));
    std::cout<<listItemsInBill(13);
    return 1;
}