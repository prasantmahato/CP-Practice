#include <iostream>
using namespace std;

#define MAX_SIZE 3
struct StackPrac
{
    char arr[MAX_SIZE];
    int size;
};
typedef StackPrac STACK;

//INIT STACK
void stackInit(STACK *s)
{   s->size=0;  }

//CHECK FOR EMPTY STACK
bool stackEmpty(STACK *s)
{   return(s->size == 0);   }

//CHECK IF STACK IS FULL
bool stackFull(STACK *s)
{   return(s->size == MAX_SIZE);    }

//RETURN TOP ELEMENT OF THE STACK
bool stackTop(STACK *s, char &element)
{
    if(stackEmpty(s))
        return false;
    else
    {
        element = s->arr[s->size-1];
        return true;
    }
}

//PUSHING ELEMENT INTO THE STACK
bool stackPush(STACK *s, char element)
{
        if(stackFull(s))
            return false;
        else
        {
            s->arr[s->size++]=element;
            return true;
        }
}

//POPPING FROM THE STACK
bool stackPop(STACK *s,char &element)
{
    if(stackEmpty(s))
        return false;
    else
    {
        s->size--;
        element=s->arr[s->size];
        return true;
    }
}

int main()
{
    STACK s1;
    char element;
    stackInit(&s1);

    if(stackEmpty(&s1)==true)
        cout<<"STACK IS EMPTY AS EXPECTED. "<<endl;
    else
        cout<<"ERROR.! :: STACK IS NOT EMPTY"<<endl;

    /*  PUSHING VALUES IN STACK */
    for(int i=0; i<MAX_SIZE; i++)
    {
        cout<<"\n\nENTER ELEMENT(char type.) TO BE PUSHED IN THE STACK: \t";
        cin>>element;
        if(stackPush(&s1,element)==true)
            cout<<"Element "<<element<<" pushed in STACK successfully..";
        else
            cout<<"\nError.! :: STACK OVERFLOW ";
    }
    cout<<"\n*********************************************"<<endl;
    /* VIEWING TOP ELEMENT  */
    if(stackTop(&s1,element)==true)
        cout<<"\nTOP ELEMENT: "<<element<<endl;
    else
        cout<<"\nSTACK EMPTY"<<endl;
    cout<<"\n*********************************************"<<endl;
    /*  POPPING ELEMENTS OF THE STACK */
    for(int i=0; i<=MAX_SIZE; i++)
    {
        if(stackPop(&s1,element)==true)
        {    
            cout<<"\nElement Popped Successfully.. ";
            cout<<"\n*********************************************"<<endl;
            if(stackTop(&s1,element)==true)
                cout<<"\nTOP ELEMENT NOW: "<<element<<endl;
            else
                cout<<"\nSTACK EMPTY"<<endl;
            cout<<"\n*********************************************"<<endl;
        }
        else
            cout<<"\nStack Underflow.. ";
    }

    return 0;

}
