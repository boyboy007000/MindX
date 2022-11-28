#include "stdio.h"
#include "8hau.h"

void QuanHau(int j){ //ham dat quan hau j len cot j
    for (int i =0; i<KICHTHUOC; i++){
        // cac cot co the dat quan hau
        // neu tai do co cot, duong cheo xuoi va nguoc deu trong
        if (CotTrong[i] && CheoXuoiTrong[j-i+KICHTHUOC -1] && CheoNguocTrong[j+i]){
            LoiGiai[j] = i; // ghi nhan lai vi tri (dat quan hau j tai cot i)
            
            //Danh dau cot, cheo xuoi, cheo nguoc qua no khong con trong
            CotTrong[i] = FALSE;
            CheoXuoiTrong[j-i+KICHTHUOC-1] = FALSE;

            if (j == KICHTHUOC-1) {//da dat quan hau cuoi cung, in loi giai 
                PrintBoard(LoiGiai);
            }
            else{
                QuanHau(j +1);
            }
            CotTrong[i] = TRUE; // phuc hoi trang thai truoc khi dat quan hau j
             CheoXuoiTrong[j-i +KICHTHUOC -1] = TRUE;
             CheoNguocTrong[j+i] = TRUE;
        }
    }


}

bool anToan(int a[63][63], int dong,int cot, int n){
    for(int i =0; i<dong; i++){
        if(a[i][cot])
        {
            return false;
        }
    }

    for(int i =dong, j= cot; i >=0 && j>=0; i--, j--){
        if(a[i][j])
        {
            return false;
        }
    }

    for(int i =dong, j= cot; i >=0 && j<n; i--, j++){
        if(a[i][j])
        {
            return false;
        }
    }
}

void PrintBoard(int a[KICHTHUOC]){
    for (int i = 0; i <KICHTHUOC ; i++){
        for(int j = 0; j<KICHTHUOC; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

bool Thu(int a[63][63],int dong,int cot, int n){

    if(dong == n){
        PrintBoard(n, a);
        return true;
    }

    bool result = false;
    for(int i =0; i<n; i++){
        if(anToan(a,dong, i, n)){
            a[dong][i] = 1;
            result = Thu(a, dong + 1, cot, n);
            a[dong][i] = 0;
        }
    }
    return result;

}