#include <stdio.h>
#include <tree.h>

int main(){
    Node* root = newNode(8);
    root->pleft = newNode(4);
    root->pright = newNode(10);
    root->pleft->pleft = newNode(2);
    root->pleft->pright = newNode(6);
    return 1;
}

