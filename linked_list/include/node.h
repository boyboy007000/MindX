struct node
{
    int value;
    node* pNext;
};

node * getNode(int value);
void printList(node *head);
void addLast(node * head, int value);