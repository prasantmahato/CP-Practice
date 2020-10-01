#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;

    void push(Node**,int);
    void display(Node*);
    void findpos(Node *,int);
};
void Node::push(Node **head,int data)
{
    class Node *newnode=new Node;
    newnode->data=data;
    newnode->next=(*head);
    (*head)=newnode;
}

void Node::display(Node *p)
{
    while(p!=NULL)
    {
        cout<<p->data<<"-->";
        p=p->next;
    }
    cout<<":: NULL"<<endl;
}

void Node::findpos(Node *ptr,int pos)
{
    int count=0;
    while(ptr!=NULL)
    {
        count++;
        if(count==pos)
        {    
            cout<<"\nSearch Succesfull.\nElement is: "<<ptr->data<<endl;;
            return;
        }
        else
            ptr=ptr->next;
    }
    cout<<"\nSearch Unsuccesfull,\t ITEM NOT FOUND."<<endl;
}
int main()
{
    Node list,*head=NULL;
    char choice='Y';
    int data=0;
    do
    {
        cout<<"\nEnter data: ";
        cin>>data;
        list.push(&head,data);
        cout<<"\nPress 'y' to enter more data, Anyother key to end. ";
        cin>>choice;
    } while (choice=='y' || choice=='Y');
    
    cout<<"\nEnter the postion to find: ";
    cin>>data;
    list.findpos(head,data);

    cout<<"\nThe linked is as follows: "<<endl;
    list.display(head);
    return 0;
}