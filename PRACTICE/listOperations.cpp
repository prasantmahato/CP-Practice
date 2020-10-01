#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
};

void push(Node **head,int data)
{
    struct Node *newnode=new Node;
    newnode->data=data;
    newnode->next=(*head);
    (*head)=newnode;
}

void displayNode(Node *p)
{
    while(p != NULL)
    {
        cout<<p->data<<"-->";
        p=p->next;
    }
    cout<<"::NULL"<<endl;
}

int main()
{
    Node *head=NULL;
    char choice='y';
    int data=0;
    do
    {
        cout<<"\nEnter data: ";
        cin>>data;
        push(&head,data);
        cout<<"\nPress (Y) to enter more data, or any key to stop.. ";
        cin>>choice;
    } while (choice=='y' || choice=='Y');
    
    cout<<"\nThe list is: "<<endl;
    displayNode(head);
    
    free(head);
    return 0;
}   