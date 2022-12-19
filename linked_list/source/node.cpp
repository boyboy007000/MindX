#include "stdlib.h"
#include "node.h"
#include "stdio.h"

node * getNode(int value){
    node* p;
    p = (node*)malloc(sizeof(struct node));
    if (p == NULL){
        printf("Loi khong du bo nho\n");
        exit(0);
    }
    p->value = value;
    p->pNext = NULL;
    return p;
}

void addFirst(node * head, int value){
    node *p = getNode(value);
    if (head == NULL){
        head = p;
    }
    else{
        p->pNext = head;
        head = p;
    }
}

void printList(node *head){
    node *p;
    if (head == NULL){
        printf("\n Danh sach rong");
    }
    else{
        for (p = head; p!=NULL; p = p->pNext){
            printf("%d\n", p->value);
        }
    }
}

void addLast(node * head, int value){
    node *p = getNode(value);
    node *cusor = head;
    if (head == NULL){
        head = p;
    }
    else{
        for (cusor; cusor->pNext; cusor= cusor->pNext)
        cusor->pNext = p;
    }

}

// them vao vi tri o giua