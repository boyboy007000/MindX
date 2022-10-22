#include <stdio.h>

int sonut_banso_xe(){
    int bangso = 0;
    int sum = 0;

    do{
        printf("nhap vao bang so xe 4 chu so: ");
        scanf("%d", &bangso);
    }while(bangso < 1000 || bangso > 9999);

    while (bangso> 0)
    {
        sum += bangso % 10;
        bangso /= 10;
    }

    if (sum > 10){
        return sum % 10;
    }
    return sum;
    
}