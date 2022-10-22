#include <stdio.h>
#include "3.3.h"

void chuyen_doi_donvi(){
        float c = 0;

    do{
        printf("nhap vao nhiet do: ");
        scanf("%f", &c);
    }while (c < 0);

    printf("do f: %-3.2f \n",convert_F_C(c));
    printf("dp k: %.2f ", convert_K_C(c));
}

float convert_K_C(float c){


    return c + 273;
    
}

float convert_F_C(float c){

    return c*1.8 + 32;
}