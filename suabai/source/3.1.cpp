#include "stdio.h"
#include <time.h>

void gioithieu(){
    char name[30];
    unsigned int tuoi = -1;

    printf("nhap ten cua ban: \n");
    scanf("%s", &name);

    time_t t = time(NULL);
    struct tm *tm = localtime(&t);

    int year = tm->tm_year + 1900;

    do{    
    printf("nhap nam sinh cua ban: ");
    scanf("%d", &tuoi);
    }while(tuoi <=0 || tuoi > year);



    printf("nam %d", tm->tm_year + 1900);

    printf("now %s", asctime( tm));

    printf("chao ban %s, nam %d ban %d tuoi ", name, year, year - tuoi);

}