#include <AVL.h>

int height(Node *root){
    if (root == NULL){
        return -1;
    }
    return root->height;
}

int getBalance(Node *root){
    if(root == NULL){
        return 0;
    }
    return getHeight(root->pleft) - getHeight(root->pright);
}

int max(int a, int b){
    return (a>b)? a:b;
}

// viet ham tinh do cao cua cai cay

int getHeight(Node *root){
    int h =0;
    if(root !=NULL){
       int l_height = getHeight(root->pleft);
       int r_height = getHeight(root->pright);
       int max_height = max(l_height, r_height);
       h = max_height + 1;

    }
    return h;
}
