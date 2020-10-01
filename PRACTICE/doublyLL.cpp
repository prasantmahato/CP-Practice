#include <iostream>
using namespace std;

struct list
{
    int num;
    list *next,*prev;
}start,*node;

int main()
{
    int i=0;
    
    start.next=NULL;
    start.prev=NULL;
    node=&start;

    for(i=0; i<10; i++)
    {
        node->next=new list;
        node->next->prev=node;
        node->num=50+i;
        node->next=NULL;
    }
    node=start.next;
    
    do
    {
        cout<<node->num<<"->";
        node=node->next;        
    } while (node->next);
    
    do
    {
        cout<<node->num<<"<-";
        node=node->prev;        
    } while (node->prev);
    
    return 0;
}