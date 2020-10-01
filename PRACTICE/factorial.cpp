/* Program to find factorial of number 1<=N<=100*/

#include <iostream>
using namespace std;
/*
#include<boost/multiprecision/cpp_int.hpp>  //To calculate very large no,BOOST LIB
using namespace boost::multiprecision;

int factorial(int);


int factorial(int x)
{
    if(x==0)
        return 1;
    else
        return (x*factorial(x-1));
}
*/

int main()
{
    int T,n,i;
    unsigned long long int fact;         //cpp_int fact=1;
    cin>>T;

    while(T--)
    {
        fact=1;;
        cin>>n;
        for(i=n; i>=1; i--)
        {
            fact*=i;
        }
        cout<<fact<<endl;
    }
    return 0;
}