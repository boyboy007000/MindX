#include <stdio.h>
#include <string.h>
#include "array.h"
// #include "xu_ly.h"
// void change_array(int a[100], int size);
// void change_array_last_element(int a[100]);
// void xuat_mang(int a[100], int size);
// void nhap_mang(int a[100], int size);
// int Sum_array(int a[100], int size);
// int Sum_array_element_even(int a[100], int size);

int main(){

    // khai_bao_ma_tran();
    // khai_bao_mang_cua_mang();
    // khai_bao_mang_tuong_minh();
    typedef int matrix[10][10];
    matrix mt1;
    int dong, cot;
    nhap_mang(mt1, dong, cot);
    xuat_mang(mt1, dong, cot);


    // int array[]= {1,2,3,4,5,6};
    // printf("%d", array[1]);
    // printf("thay doi gia tri phan tu mang %d", ++array[0]);
    // printf("thay doi gia tri phan tu mang %d", array[0]);

    // int a [100] = {1,2,3};
    // printf("phan tu 0 cua mang a la %d \n", a[0]);
    // change_array(a, 100);
    // printf("phan tu 0 cua mang a la %d \n", a[0]);

    // printf("phan tu cuoi cua mang a la %d \n", a[1]);
    // change_array_last_element(a);
    // printf("phan tu cuoi cua mang a la %d \n", a[1]);

    // xuat_mang(a, 3);
    // char s[] = "\n";
    // printf("nhap chuoi ky tu:\n");
    // scanf("%s", &s);// ko co khoang trang trong luc nhap chuoi
    // printf("chuoi ban da nhap: %s ", s);
    // gets(s);// cho phep nhap khoang trang
    // printf("chuoi ky tu %s", s);
    // puts(s);

    // int count_char = 0;
    // while (s[count_char] != '\n')
    // {
    //     count_char++;
    // }
    // printf("so luong chu trong chuoi s la: %d", count_char);
    // printf("so luong ky tu trong chuoi s theo ham co san: %ld", strlen(s));

    // int index = 0;
    // while (s[index] != '\n')
    // {
    //     if (s[index] >= 'a' && s[index] <= 'z'){
    //         s[index] = s[index] - 32;
    //     }
    //     index++;
    // }
    // printf("chuoi sau khi chuyen %s", s);
    
    return 1;
}

// int Sum_array_element_even(int a[100], int size){
//     int sum = 0;hello
//     for(int i = 0; i < size; i++){
//         if(a[i] % 2 ==0){
//             sum += a[i];
//         }
//     }
//     return sum;
// }

// void xuat_mang(int a[100], int size){
//     printf("xuat mang");
//     for(int i = 0; i < size; i++){
//         printf("a[%d]: %d", i, a[i]);
//     }
// }

// void change_array(int a[100], int size){
//     a[0] = 100;
// }

// void change_array_last_element(int a[100]){
//     a[99] = 0;
// }