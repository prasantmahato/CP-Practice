#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next,*prev;
};

void push(struct Node **head_ref, int new_data)
{
    struct Node *new_ptr=new Node;
    new_ptr->data=new_data;
    new_ptr->next=(*head_ref);
    new_ptr->prev=NULL;

    if((*head_ref) != NULL)
        (*head_ref)->prev = new_ptr;
    
    (*head_ref)=new_ptr;
}

void insertBefore(Node **head_ref, Node *next_node,int new_data)
{
    if(next_node == NULL)   
    {
        cout<<"\nGiven Node cannot be NULL"<<endl;
        return;
    }
    struct Node *new_node= new Node;
    new_node->data=new_data;
    new_node->prev=next_node->prev;
    next_node->prev=new_node;

    if(new_node->prev!=NULL)
        new_node->prev->next=new_node;
    else
        (*head_ref)=new_node;
}
void printList(Node *node)
{
    Node *last;
    cout<<"\nTraversal in forward direction: "<<endl;
    while(node!=NULL)
    {
        cout<<node->data<<"-->";
        last=node;
        node= node->next;
    }
    cout<<"::NULL"<<endl;
    cout<<"\nTraversal in backward direction : "<<endl;
    while(last!=NULL)
    {
        cout<<last->data<<"<--";
        last=last->prev;
    }
    cout<<"::NULL"<<endl;
}

int main()
{
    Node *head=NULL;
    for(int i=5; i>0; i--)
    {
        push(&head,i*3);
    }
    printList(head);
    cout<<"\nInserting data: "<<endl;
    insertBefore(&head,head->next,67);
    printList(head);
    free(head);
    return 0;
}












