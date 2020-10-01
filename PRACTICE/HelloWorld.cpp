/*program  to print my name */
#include <iostream>
#include <utility>

using namespace std;

int main()
{
    int a,b,sum;

    a=5;
    b=2;
    cout<<"\nValue of a and b:- "<<a<<" "<<b<<endl;
    sum=a+b;
    swap(a,b);
    cout<<"\nValue of a and b after swapping:- "<<a<<" "<<b<<endl;

    cout<<"\nSum of a & b is "<<sum<<endl;
    
    return 0;
}
