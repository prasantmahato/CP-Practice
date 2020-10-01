#include <iostream>
#include <stdlib.h>

using namespace std;

class Node
{
    public:
        int data;
        Node *next;
};
void push(Node **head_ref,int new_data)
{
    Node *new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

void insertAfter(Node *prev_node, int new_data)
{
    if(prev_node==NULL)
    {
        cout<<"\nThe given previous node cannot be NULL";
        return;
    }
    
    Node *new_node = new Node();
    new_node->data = new_data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}

void append(Node **head_ref,int new_data)
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


void printList(Node *node)
{
    while(node != NULL)
    {
        cout<<" "<<node->data<<"->";
        node = node->next;
    }
}

void mainMenu()
{
    Node *head=NULL;
    int data,ch;
    char choice='Y';

    do{
    
    cout<<"\n\t\t\tMAIN MENU";
    cout<<"\n1.Add Node at END of the List.";
    cout<<"\n2.Add Node at Begining of the List.";
    cout<<"\n3.Insert Node at Desired Position.";
    cout<<"\n4.Display the Linked List.";
    cout<<"\nChoose the type of operation:- ";
    cin>>ch;
    
    cout<<"\nEnter the data for the Node: ";
    cin>>data;
    
    switch (ch)
    {
        case 1:
            append(&head,data);
            break;

        case 2:
            push(&head,data);
            break;
        
        case 3:
            insertAfter(head->next,data);
            break;
        case 4:
            printList(head);
            break;
    default: 
        cout<<"\nInvalid Option..!!";
        break;
    }
    
    cout<<"\nEnter Y to go to Main Menu, N to Exit..";
    cin>>choice;

    } while(choice=='Y' || choice=='y');
}
int main()
{
    
    cout<<"\nWelcome to Linked List Operations:";
    mainMenu();
    /*
    append(&head, 6);
    push(&head, 7);
    push(&head, 1);
    append(&head, 4);
    
    insertAfter(head->next, 8);
    

    cout<<"\nCreated Linked List is: ";
    printList(head);
   */ 
    return 0;
}
