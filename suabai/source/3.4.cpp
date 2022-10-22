#include <stdio.h>
#include "3.4.h"

void khoangthoigian(){
    thoigian t1, t2;

    do{
        printf(" nhap gio: ");
        scanf("%d", &t1.gio);
        printf(" nhap phut: ");
        scanf("%d", &t1.phut);
        printf(" nhap giay: ");
        scanf("%d", &t1.giay);
    }while (!nhap_thoi_gian(t1));
    do{
        printf(" nhap gio: ");
        scanf("%d", &t2.gio);
        printf(" nhap phut: ");
        scanf("%d", &t2.phut);
        printf(" nhap giay: ");
        scanf("%d", &t2.giay);
    }while (!nhap_thoi_gian(t2));

    int tongt1 = t1.giay + t1.phut*60 + t1.gio*3600;
    int tongt2 = t2.giay + t2.phut*60 + t2.gio*3600;

    printf("khoang cach thoi gian cua 2 thoi diem la %d", tongt1 - tongt2);
}

bool nhap_thoi_gian(thoigian t){
    if (t.giay < 0 || t.gio < 0 || t.phut < 0 ){
        return 0;
    }
    return 1;
}