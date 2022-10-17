#include <stdio.h>
#include "phanso.h"

int main(){
    // phanso ps1 = {
    //     1,
    //     2
    // };
    // phanso ps1, ps2;
    // // nhapPS(ps1);
    // nhapPS1(ps1);
    // nhapPS1(ps2);
    // xuatPS(ps1);

    // printf("ket qua cong 2 phan so: \n" );
    // xuatPS(cong(ps1, ps2));
    // printf("ket qua tru 2 phan so: \n" );
    // xuatPS(tru(ps1, ps2));
    // printf("ket qua chia 2 phan so: \n" );
    // xuatPS(chia(ps1, ps2));
    // printf("ket qua nhan 2 phan so: \n" );
    // xuatPS(nhan(ps1, ps2));
    // printf("ket qua rut gon phan so: \n" );
    // xuatPS(rutgon(cong(ps1, ps2)));

    typedef phanso mang_ps1[5];

    mang_ps1 lst_ps1;

    nhap_mang_PS(lst_ps1, 3);
    xuat_mang_PS(lst_ps1, 3);
    xuatPS(tongPS(lst_ps1, 3));


    return 1;
}