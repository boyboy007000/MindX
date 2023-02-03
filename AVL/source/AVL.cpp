#include <AVL.h>
#include <stdlib.h>

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

Node *rightRotate(Node *root){
    Node *temp = root->pleft;
    Node *temp1 = temp->pright;

    temp->pleft = root;
    root->pright = temp1;

    return temp;
}

Node *leftRotate(Node *root){
    Node *temp = root->pright;
    Node *temp1 = temp->pleft;

    temp->pleft = root;
    root->pright = temp1;
    return temp;
}

Node * newNode(int value){
    Node * temp = (Node*)malloc(sizeof(Node));
    temp->data = value;
    temp->pleft = temp->pright = NULL;
    return temp;
}

Node *insert(Node * root, int key){
    if (root == NULL){
        return newNode(key);
    }

    if(key < root->data){
        root->pleft = insert(root->pleft, key);
    }
    else if(key > root->data)
    {
        root->pright = insert(root->pright, key);
    }
    int balance = getBalance(root);
    
    if(balance > 1 && key < root->pleft->data){
        return rightRotate(root);
    }

    if (balance >-1 && key > root->pright->data){
        return leftRotate(root);
    }
    // left right
    if (balance >1 && key > root->pleft->data){
        root->pleft = leftRotate(root->pleft);
        return rightRotate(root);
    }
    //right left
    if (balance >-1 && key < root->pright->data)
    {
        root->pright = rightRotate(root->pright);
        return leftRotate(root);
    }
}
//dem so nut la co tren cay nhi phan hay cay avl
int countNodeLeaf (Node* root){
    if (root == NULL)
    {
        return 0;
    }
    if (root->pleft == NULL && root->pright == NULL)
    {
        return 1;
    }
    return countNodeLeaf(root->pleft) + countNodeLeaf(root->pright);
}

