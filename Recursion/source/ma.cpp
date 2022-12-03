#include "ma.h"
#include "stdio.h"

void NuocDi(int n, int y, int x){// nuoc di thu n, xuat phat tu hang y cot x
    for (int i = 0; i < 8; i++){ // 8 nuoc di co the co
        // chon thu huong di thu i (trong huong 8 di)
        int dmoi = y + dd[i], cmoi = y + dc[i];
        // neu huong di nay hop le va tai do chua co nuoc di nao
        if (dmoi >= 0 && dmoi < KICHTHUOC && cmoi >= 0 &&
        cmoi < KICHTHUOC && BanCo[dmoi][cmoi] ==0) {
            BanCo[dmoi][cmoi] = n; //Ghi nhan nuoc di thu n nay
            if (n == KICHTHUOC * KICHTHUOC) // nuoc di cuoi cung
                PrintBoard(BanCo); //In Ban Co hien tai
            else // nguoc lai tim nuoc di ke tiep
                NuocDi(n + 1, dmoi, cmoi);
            BanCo[dmoi][cmoi] = 0; // phuc hoi trang thai
        }
    }
}

void PrintBoard(int a[KICHTHUOC][KICHTHUOC]){
    for (int i = 0; i <KICHTHUOC ; i++){
        for(int j = 0; j<KICHTHUOC; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}