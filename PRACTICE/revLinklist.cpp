#include <iostream>
using namespace std;

struct link
{
    int data;
    link *next;
};

link *start,*node,*previous,*current,*cntr;

void display(link *);
void createeList(link *);
link *revList(link *);

link *revList(link *start)
{
    current=start;
    previous=NULL;

    while(current)
    {
        cntr=new link;
        cntr=current->next;
        current->next=previous;
        previous=current;
        current=cntr;
    }
    start=previous;
    return (start);
}

void display(link *node)
{
    while(node)
    {
        cout<<node->data<<" -> ";
        node=node->next;
    }
}

void createList(link *node)
{
    int i;
    int num;

    cout<<"\nEnter the number of nodes to create: ";
    cin>>num;

    for(i=0; i<num; i++)
    {
        cout<<"\nEnter data in Node ("<<(i+1)<<"):- ";
        cin>>node->data;
        node->next=new link;
        if(i==num-1)
            node->next=NULL;
        else
            node=node->next;
    }
    node->next=NULL;
}

int main()
{
    link *node,*p;
    node=new link;
    createList(node);
    cout<<"\nEntered List is as follows: "<<endl;
    display(node);
    p=new link;
    p=revList(node);
    cout<<"\n\nThe Linked List after Reversing: "<<endl;
    display(p);
    return 0;

}