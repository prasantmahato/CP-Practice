#include <iostream>
#include <stdlib.h>

using namespace std;
float calcFunc(float, float, float, float, float &, float &);
float calcFunc(float, float, float, float &, float &);

int main()
{
    char ch;
    float a,b,c,d,res,root1,root2;
    cout<<"\n\t\t\tWelcome to MATHS NUMERICAL ROOT SOLVING Methods.";
    cout<<"\n1. Bisection Method.(Currently Available)\n2. Secant Method.\n3. Netwon-Raphson Method."<<endl;

    cout<<"\nChoose Equation tpye-> "<<endl;
    cout<<"\n1. Quadratic Equation.\n2. Cubic Equation "<<endl;
    cout<<"==> ";
    cin>>ch;
    
/*
    switch (ch)
    {
        case 1:
        {
            cout<<"\nEnter the values(a,b,c) of equation(aX^2+bX+c):"<<endl;
            cin>>a>>b>>c;
            res=calcFunc(a,b,c,root1,root2);
            break;
        }
        case 2:
        {
            cout<<"\nEnter the values(a,b,c,d) of equation(aX^3+bX^2+cX+d):"<<endl;
            cin>>a>>b>>c>>d;
            res=calcFunc(a,b,c,d,root1,root2);
            break;
        }
        default:
            cout<<"\nINVALID OPTION..!! ";
            
    }
*/

    if(ch=='1')
    {
    
       cout<<"\nEnter the values(a,b,c) of equation(aX^2+bX+c):"<<endl;
       cin>>a>>b>>c;
       cout<<"\nPlease Enter The Approximate Roots: ";
       cin>>root1>>root2;

       res=calcFunc(a,b,c,root1,root2);
    }
    else if(ch=='2')
    {
        cout<<"\nEnter the values(a,b,c,d) of equation(aX^3+bX^2+cX+d):"<<endl;
        cin>>a>>b>>c>>d;
        cout<<"\nPlease Enter The Approximate Roots: ";
        cin>>root1>>root2;

        res=calcFunc(a,b,c,d,root1,root2);
    }
    else
    {
        cout<<"\n\a ERROR..!! INCORRECT OPTION"<<endl;
        exit(0);
    }
    
    

    cout<<"\nThe Value of (x1) : "<<root1<<"\t(x2) : "<<root2<<endl;
    cout<<"\nThe Result f(x): "<<res<<endl;
    return EXIT_SUCCESS;
           
}

/**********************1st Quadratic Equation*****************/
float calcFunc(float p,float q,float r,float &root1,float &root2)
{
    float i,result;
    
    for(i=root1; i<root2; i+=0.1)    
    {
        result=((p*i*i)+(q*i)+r);
        if(result>0)
        {
         root1=i;
         return(result);
        }
        else
        {
            root2=i;
            
        }
    }
    return(result);
}

/**************** 2nd Cubic Equation*****************/
float calcFunc(float p,float q,float r,float s,float &root1,float &root2)
{
    float i,result;
    
    for(i=root1; i<root2; i+=0.1)    
    {
        result=((p*i*i*i)+(q*i*i)+(r*i)+s);
        if(result>0)
        {
            root1=i;
            return(result);
        }
        else
        {
            root2=i;
            
        }
    }
    
    return(result);
}