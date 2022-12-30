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

void addMid(node * head, int value, int k){
    node *p = getNode(value);
    node *cusor = head;
    node *temp = NULL;
    if (head == NULL){
        head = p;
    }
    else{
        for (cusor; cusor->pNext && k > 0; cusor= cusor->pNext, k--)
        temp = cusor->pNext; // *temp = cusor->pNext
        cusor->pNext = p;
        p->pNext = temp;
    }
}

void delFirst(node * head){
    node *p = head;
    if (head == NULL){
        return;
    }
    else{
        head = head->pNext;
        free(p);

    }
}

void delLast(node * head){
    node *cusor = head;
    if (head == NULL){
        return;
    }
    else{
        for (cusor; cusor->pNext; cusor= cusor->pNext)
        free(cusor);
    }
}

void delMid(node * head, int k){
    node *cusor = head;
    node *temp = NULL;
    if (head == NULL){
        return;
    }
    else{
        for (cusor; cusor->pNext && k > 1; cusor= cusor->pNext, k--)
        temp = cusor->pNext;
        cusor->pNext = temp->pNext;
        free(temp);
    }
}

void delValueK (node * head, int k){
     node *cusor = head;
    node *temp = NULL;
    if (head == NULL){
        return;
    }
    else{
        for (cusor; cusor->pNext && cusor->pNext->value !=k; cusor= cusor->pNext)
        temp = cusor->pNext;
        cusor->pNext = temp->pNext;
        free(temp);
    }
}

// ap dung quick sort cho danh sach lien ket

void slitList(node * head){
    node *cusor = head;
    node *odd = NULL;
    node *even = NULL;
    if (head == NULL){
        return;
    }
    else{
        for (cusor; cusor->pNext ; cusor= cusor->pNext){
            if (cusor->value %2 == 0){
                addFirst(even, cusor->value);
            }
            else{
                addFirst(odd, cusor->value);
            }
        }
    }
}

// de quy, tim kiem, sap xep, dslk

int countNode(node * head){
    node *cusor = head;
    int count = 0;
    if (head == NULL){
        return;
    }
    else{
        for (cusor; cusor->pNext ; cusor= cusor->pNext){
            count++;
        }
    }
    return count;
}

void addLast(node * head, node * current){
    node * cusor = head;
    if (head == NULL){
        head = current;
    }
    else{
        while (cusor)
        {
            cusor = cusor->pNext;
        }
        cusor->pNext = current;
    }
}

void reverseList(node * head){
    node * head2 = NULL;
    node *cusor = head;
    while (cusor){
        node *preNode = NULL;
        if (cusor->pNext->pNext =  NULL){
            preNode = cusor;
        }
        if (cusor->pNext == NULL){
            addLast(head2, cusor);
            cusor = head;
            preNode->pNext = NULL;
        }
    }
}

void reverseList(node * head){
     node *pre = NULL;
     node *cur = head;
     node *next = NULL;
     while (cur)
     {
        next = cur->pNext;
        cur->pNext = pre;
        pre = cur;
        cur = next;
     }
     head = pre;
     
}