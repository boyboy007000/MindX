#include <stdio.h>

//b1 khai bao ham
void in_hello();
void in_hello_name();
void cong_hai_so(int a, int b); // a +b +c +d + e
void in_so_lon(int a, int b);
void thay_so(int a);
void thay_so_a(int& a);

int cong_hai_so_nang_cao(int a, int b);

int bien_toan_cuc = 5;

int main(){
    // printf("hello");

    //b3 su dung ham
    // in_hello();
    // in_hello_name();
    int a = 3,b = 5, c = 4, kq, d = 10, e =11;
    // printf("nhap so a:");
    // scanf("%d", &a);
    // printf("nhap so b: ");
    // scanf("%d", &b);
    kq = cong_hai_so_nang_cao(a,b);
    kq = cong_hai_so_nang_cao(kq, c);
    kq = cong_hai_so_nang_cao(kq, d);
    kq = cong_hai_so_nang_cao(kq, e);

    printf("ket qua cong 3 so %d", kq);
    // thay_so(a);
    // printf("a : %d \n",bien_toan_cuc);
    // thay_so_a(a);
    // printf("a : %d \n",a);
    return 0;
}

int cong_hai_so_nang_cao(int a, int b){
    int kq;
    kq = a + b;
    return kq;
}
//b2 dinh nghia ham
void in_hello(){
    printf("hello");
}

void in_hello_name(){
    char name [50];
    printf("nhap ten cua ban: ");
    scanf("%s", &name);
    printf("hello %s", name);
}

void cong_hai_so(int a, int b){
    printf("tong 2 so la: %d \n", a+b);
}

void thay_so(int a){
    a = 0; 
    // bien_toan_cuc = 0;
}

void thay_so_a(int & a){
    a = 0;
}