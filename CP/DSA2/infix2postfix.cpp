#include <bits/stdc++.h>
#include <stdio.h> 
#include <stdlib.h>

using namespace std;

#define size 100
char infix[100],postfix[100],Stack[100];
int top=-1;

int precedence(char ch);
char Pop();
char Topelement();
void Push(char ch);
int braces(char *);

int main()
{
    int test;
    cin>>test;
    while(test--){

    char ele,elem,st[2];
    int prep,pre,popped,j,chk,i;
    i=j=chk=0;

    strcpy(postfix," ");
    cin>>infix;
    chk=braces(infix);
    if(chk!=0)
        exit(0);
    for(i=0; infix[i]!='\0'; i++)   
    {
        if(infix[i]!='(' && infix[i]!=')' && infix[i]!='^' && infix[i]!='*' && infix[i]!='/' && infix[i]!='+' && infix[i]!='-')
            postfix[j++]=infix[i];
        else if(infix[i]=='(')
        {
            elem=infix[i];
            Push(elem);
        }
        else if(infix[i]!=')')
        {
            while((popped=Pop())!= '(')
                postfix[j++]=popped;
        }
        else
        {
            elem=infix[i];
            pre=precedence(elem);
            ele=Topelement();
            prep=precedence(ele);

            if(pre>prep)
                Push(elem);
            else
            {
                while (prep>=pre)
                {
                    if(ele=='#')
                        break;
                    popped=Pop();
                    ele=Topelement();
                    postfix[j++]=popped;
                    prep=precedence(ele);
                }
                Push(elem);
            }
        }
    }
    while ((popped=Pop())!='#')
    {
        postfix[j++]=popped;
    
    }
    
    postfix[j]='\0';
    cout<<postfix<<endl;
    }
    return 0;
}

int precendece(char ch)
{
    switch (ch)
    {
        case '^' : return 5;
        case '/' : return 4;
        case '*' : return 4;
        case '+' : return 3;
        case '-' : return 3;
        default  : return 0;
    }
}

char Pop()
{
    char ret;
    if(top!=1)
    {
        ret=Stack[top];
        top--;
        return ret;
    }
    else
    {
        return '#';
    }
}

char Topelement()
{
    char ch;
    if(top!=-1)
        ch=Stack[top];
    else
        ch='#';
    return ch;
}
void Push(char ch)
{
    if(top!=size-1)
    {
        top++;
        Stack[top]=ch;
    }
}

int braces(char *a)
{
    int leftbr,rightbr;
    leftbr=rightbr=0;
    for(int i=0; a[i]; i++)
    {
        if(a[i]=='(')
            leftbr++;
        else if(a[i]==')')
            rightbr++;
    }
    if(leftbr==rightbr)
        return 0;
    else if(leftbr<rightbr)
        return 1;
    else
        return -1;   
}