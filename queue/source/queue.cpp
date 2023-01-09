#include "queue.h"


void enQueue(node * head, int value){
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

node * deQueue(){
    node *p = head;
    if (head == NULL){
        return;
    }
    else{
        head = head->pNext;
        return p;
    }
}