#include <tree.h>
#include <stdlib.h>
#include <stdio.h>

Node * newNode(int value){
    Node * temp = (Node*)malloc(sizeof(Node));
    temp->data = value;
    temp->pleft = temp->pright = NULL;
    return temp;
}

Node * insert(Node* root, int key){
    if (root == NULL){
        return newNode(key);
    }

    if(key < root->data){
        root->pleft = insert(root->pleft, key);
    }
    root->pright = insert(root->pright, key);
    return root;
}

Node * search(Node* root, int key){
    if (root == NULL || root->data == key){
        return root;
    }

    if(key < root->data){
        root->pleft = search(root->pleft, key);
    }
    root->pright = search(root->pright, key);
    return root;
}

Node * minValueNode(Node * root){
    Node * current = root;
    while (current && current->pleft != NULL){
        current = current->pleft;
    }
    return current;
}

Node * deleteNode(Node * root, int key){
    if (root == NULL){
        return root;
    }

    if(key < root->data){
        root->pleft = deleteNode(root->pleft, key);
    }
    else if (key > root->data){
        root->pright = deleteNode(root->pright, key);
    }
    else{
        if (root->pleft == NULL and root->pright == NULL){
            return NULL;
        }

        else if (root->pleft == NULL){
            Node * temp = root->pright;
            free(root);
            return temp;
        }
        else if (root->pright == NULL){
            Node * temp = root->pleft;
            free(root);
            return temp;
        }

        Node * minNode = minValueNode(root->pleft);

        root->data = minNode->data;

        root->pright = deleteNode(root->pright, minNode->data);
    }
    return root;

}

void storeSorted(Node * root, int arr[], int& size){
    if (root != NULL){
        storeSorted(root->pleft, arr, size);
        arr[size++] = root->data;
        storeSorted(root->pright, arr, size);
    }
}

void printInorder(Node * root){
    if (root == NULL){
        return;
    }
    printInorder(root->pleft);
    printf("value %d", root->data);
    printInorder(root->pright);

}

void printPreorder(Node * root){
    if (root == NULL){
        return;
    }
    printf("value %d", root->data);
    printPreorder(root->pleft);
    printPreorder(root->pright);
}

void printPostorder(Node * root){
    if (root == NULL){
        return;
    }
    printPostorder(root->pleft);
    printPostorder(root->pright);
    printf("value %d", root->data);
}