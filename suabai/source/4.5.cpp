#include "stdio.h"

void in_(){
    int count = 0;
    for (int i = 100; i < 1000; i++){
        int chuc = (i % 100) / 10;
        int donvi = (i % 100) % 10;
        int tram = i/100;
        if(chuc == (tram + donvi)){
            printf(" so %d thoa ", i);
            count++;
        }
    }
}