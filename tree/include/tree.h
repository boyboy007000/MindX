struct Node
{
    int data;
    Node * pleft;
    Node * pright;
};

Node * newNode(int value);
Node * insert(Node* root, int key);
Node * search(Node* root, int key);
Node * minValueNode(Node * root);
Node * deleteNode(Node * root, int key);