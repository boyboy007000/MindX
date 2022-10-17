#include <stdio.h>
#include <phanso.h>
#include <bai1.h>

void nhapPS(phanso &ps1){
 ps1 = {
        1,
        2
    };
    
}

void xuatPS(phanso ps){
    printf("tu cua phan so: %d\n", ps.tu);
    printf("mau cua phan so: %d\n", ps.mau);
}

void nhapPS1(phanso &ps1){
    int tu, mau;
    printf("nhap tu: \n");
    scanf("%d", &tu);
    do{
        printf("nhap mau: \n");
        scanf("%d", &mau);
    }while (mau == 0);

    ps1 = {
        tu,
        mau
    };
    
}

//cong 2 phan so
phanso cong(phanso ps1, phanso ps2){
    phanso kq;
    kq.tu = ps1.tu * ps2.mau + ps2.tu * ps1.mau;
    kq.mau = ps1.mau * ps2.mau;
    return kq;
}

//tru 2 phan so
phanso tru(phanso ps1, phanso ps2){
    phanso kq;
    kq.tu = ps1.tu * ps2.mau - ps2.tu * ps1.mau;
    kq.mau = ps1.mau * ps2.mau;
    return kq;
}

//chia 2 phan so
phanso chia(phanso ps1, phanso ps2){
    phanso kq;
    kq.tu = ps1.tu * ps2.mau;
    kq.mau = ps1.mau * ps2.tu;
    return kq;
}

//nhan 2 phan so
phanso nhan(phanso ps1, phanso ps2){
    phanso kq;
    kq.tu = ps1.tu * ps2.tu;
    kq.mau = ps1.mau * ps2.mau;
    return kq;
}

//rut gon 2 phan so
phanso rutgon(phanso ps){
    int uscln = gcd(ps.tu, ps.mau);
    phanso kq;
    kq.tu = ps.tu / uscln;
    kq.mau = ps.mau / uscln;
    return kq;
}

//nhap mang phan so
void nhap_mang_PS(phanso mang[], int size){
    for (int i = 0; i < size; i++){
        nhapPS1(mang[i]);
    }
}

//xuat mang phan so
void xuat_mang_PS(phanso mang[], int size){
    for (int i = 0; i < size; i++){
        xuatPS(mang[i]);
    }
}

//tinh tong cua mang
phanso tongPS(phanso mang[], int size){
    phanso kq = {
        0,
        1
    };
    for (int i = 0; i < size; i++){
        kq = cong(kq, mang[i]);
    }
    return kq;
}

