#include <iostream>
using namespace std;

#define MAX 1000

class Stack
{
    int top;
public:
    int arr[MAX];
    Stack(){    top=-1;     }
    bool push(int x);
    int pop();
    int peek();
    bool isEmpty();    
};

bool Stack::push(int x)
{
    if(top >= (MAX-1))
    {
        cout<<"\nStack Overflow.";
        return false;
    }
    else
    {
        arr[++top]=x;
        cout<<x<<" pushed in Stack."<<endl;
        return true;
    }
}

int Stack::pop()
{
    if(top<0)
    {
        cout<<"\nStack Underflow.";
        return 0;
    }
    else
    {
        int x=arr[top--];
        return x;
    }
}

int Stack::peek()
{
    if(top<0)
    {
        cout<<"\nStack is Empty.";
        return 0;
    }
    else
    {
        int x=arr[top];
        return x;
    }
}

bool Stack::isEmpty()
{
    return (top<0);
}

int main()
{
    Stack s;
    s.push(20);
    s.push(2120);
    s.push(10);
    s.push(20123);
    cout<<s.pop()<<"\nPopped from Stack. ";
    return 0;
}