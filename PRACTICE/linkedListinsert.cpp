#include <iostream>
using namespace std;

/* A linked List Node*/
class Node
{
    public:
        int data;
        Node *next;
};

void push(Node **head_ref, int new_data)
{
    /* Allocating Node */
    Node *new_node = new Node();
    
    /* Putting the data passed by function */ 
    new_node->data = new_data;

    /* Make next of new node as head */
    new_node->next = *head_ref;

    /* Move the head to point to new node */
    *head_ref = new_node;
}

void insertAfter(Node *prev_node, int new_data)
{
    if(prev_node==NULL)
    {
        cout<<"\nThe Previous node cannot be NULL";
        return;
    }
    Node *new_node = new Node();
    new_node->data = new_data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}

void append(Node **head_ref, int new_data)
{
    Node *new_node = new Node();
    Node *last = *head_ref;
    new_node->data = new_data;
    new_node->next = NULL;

    if(*head_ref == NULL)
    {
        *head_ref = new_node;
        return;
    }

    while(last->next != NULL)
        last = last->next;
    
    last->next = new_node;
    return;
}

void delnode(Node *node)
{
    
}

void printList(Node *node)
{
    int count=0;
    while(node != NULL)
    {   
        cout<<" "<<node->data;
        node = node->next;
        count++;
    }
    cout<<"\nTotal Nodes:- "<<count<<endl;
}

int main()
{
    Node *head = NULL;
    
    append(&head, 6);
    push(&head,7);
    push(&head,1);
    append(&head,4);
    insertAfter(head->next,8);
    printList(head);
    cout<<endl;

    return 0;
}