#include <stdio.h>

void tinh_ngay_trong_thang(){

    const int months[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int month = 0, year = 0;
    do{
        printf("nhap thang:");
        scanf("%d", &month);
        printf("nhap nam:");
        scanf("%d", &year);
    }while(month <= 0 || year <= 0);

    if (month != 2){
        printf("so ngay trong thang %d cua nam %d: %d",month,year, months[month-1]);
    }
    else if (month == 2)
    {
        if ((year % 400 == 0) || (year % 4 == 0 && year % 100 !=0))
        {
            printf("so ngay trong thang 2 cua nam %d: 29",year);
        }
        else{
            printf("so ngay trong thang 2 cua nam %d: 28",year);
        }
    }
    

}