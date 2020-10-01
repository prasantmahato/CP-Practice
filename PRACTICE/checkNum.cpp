#include <iostream>
#include <stdlib.h>

using namespace std;

//bool checkPrime(float num);

bool checkPrime(int num)
{
    int c=0;

    for(int i=1; i<num ;i++)
    {
        if(num%i == 0)
        {    
            c++;
        }
    }
    if(c!=0)
        return true;
    else
        return false;

    
}

int main()
{
    int num;
    bool confirm;
    cout<<"\nEnter Number: ";
    cin>>num;
    confirm=checkPrime(num);
    if(!confirm)
        cout<<num<<" is not a prime number."<<endl;
    else
    {
        cout<<num<<" is a Prime Number."<<endl;
    }
    
    return 0;
}