#include <stdio.h>

int * dich_chuyen_phan_tu(int a[], int & size, int k){
    /*dich chuyen cac phan tu o vi tri k+1 vao vi tri k
    vd: 1 2 3 4 5 6
    vt muon dich chuyen 3
    output: 1 2 4 5 6*/

    // neu buoc ke tiep lon hon size thi reset ve mang ban dau

    for (int i = k; i < size; i++){
        a[i] = a[i+1];
    }

    size--;
    return a;
}

void solution3(){
    int a [] = {12, 43, 12, 34, 43, 12, 5, 34};
    int size = 8;
    int k =3;
    int *kq;
    int step = k - 1;
    while (size > 1)
    {
        
        kq = dich_chuyen_phan_tu(a, size, step);
        step = step + k -1;
        if (step > size){
            if (step % size ==0){
                step = (step % size) +2;
            }
            else{
                step = step % size;
            }
        }

    }

    printf("so luong phan tu cua mang %d", size);
    printf("gia tri phan tu con lai cua mang %d", kq[0]);
    
}