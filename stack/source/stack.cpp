#include "stack.h"
#include "string.h"
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

void push(node * head, int value){
    node *p = getNode(value);
    if (head == NULL){
        head = p;
    }
    else{
        p->pNext = head;
        head = p;
    }
}

node * pop(node * head){
    node *p = head;
    if (head == NULL){
        return;
    }
    else{
        head = head->pNext;
        return p;
    }
}

bool checkEmpty(node * head){
    if (head == NULL)
    {
        return true;
    }
    return false;
}

void processingSequence(){
    const char str [] = "EAS*Y**QUE***ST***I*ON";
    node * head = NULL;
    int index = 0;
    while (str[index] != '\0'){
        if (str[index] != '*'){
            push(head, str[index]);
        }
        if (str[index] == '*'){
            printf("%c", pop(head)->value);
        }
    }
}