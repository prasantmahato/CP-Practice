#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

struct node
{
    int info;
    node *next;
}*start,*endNode,*newptr,*save,*ptr;

node *createNode(int);
void insertBeg(node *);
void insertEnd(node *);
void display(node *);

int main()
{
    start= NULL;
    int inf,choice;
    char ch='Y';

    while(ch=='y' || ch=='Y')
    {
        cout<<"\nEnter information for the new Node: ";
        cin>>inf;
        newptr=createNode(inf);
        
        
        if(newptr!= NULL)
            cout<<"\nNew Node Created Succesfully";
        else
        {
            cout<<"\nCannot Create New Node";
            exit(1);
       }
        
       cout<<"\nChoose the method of Node Insetion: "<<endl;
       cout<<"1.Begining of the Linked List."<<endl;
       cout<<"2.Ending of the Linked List."<<endl;
       cin>>choice;
    
       switch (choice)
       {
       case 1:
           insertBeg(newptr);
           break;
       case 2:
            insertEnd(newptr);
            break;

       default:
            cout<<"\nInvalid Choice..!!";
            break;
       } 
              
       cout<<"\nNow The List is as follows: ";
       display(start);
       
       cout<<"\nPress 'Y' to enter more Nodes,\t 'N' to exit():- ";
       cin>> ch;
    }
return 0;
}

node *createNode(int data)
{
    ptr=new node;
    ptr->info= data;
    ptr->next= NULL;
    return ptr;
}

void insertBeg(node *np)
{
    if(start==NULL)
        start=np;
    else
    {
        save=start;
        start=np;
        np->next=save;
    }
}

void insertEnd(node *np)
{
    if(start==NULL)
        start=endNode=np;
    else
    {
        endNode->next=np;
        endNode=np;
    }
}
    

void display(node *np)
{
    while(np!=NULL)
    {
        cout<<np->info<<"["<<&np->info<<"]->";
        np=np->next;
   }
   cout<<"NULL\n";
}