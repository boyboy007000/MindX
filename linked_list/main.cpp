#include "node.h"
#include "stdio.h"

int main(){
    node* head = NULL;
    int k;
    //tao phan tu dau tien
    while (1){
        printf("Nhap so nguyen (nhap 0 de thoat:");
        scanf("%d", &k);
        if (k == 0){
            break;
        }
        addLast(head, k);
    }
    printList(head);
    return 0;
}