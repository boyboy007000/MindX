#include <stdio.h>

void doi_tien(){
    int tien = 0;
    int manggia [] = {20000, 10000, 5800, 1000};
    int solan_sudung [4] = {0}; 
    int i = 0;
    do{
        printf("nhap so tien can doi: ");
        scanf("%d", &tien);
        
    }while(tien <= 0);

    while (tien > 1000)
    {
        while (tien - manggia[i] > 0 )
        {
            solan_sudung[i] += 1;
            tien -= manggia[i];
        }
        i++;
        
    }
    printf("so lan su dung 20000: %d", solan_sudung[0]);
    printf("so lan su dung 10000: %d", solan_sudung[1]);
    printf("so lan su dung 5000: %d", solan_sudung[2]);
    printf("so lan su dung 1000: %d", solan_sudung[3]);
    printf("so tien du: %d", tien); 
}