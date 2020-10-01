#include <iostream>
using namespace std;

int main()
{
    int num,rem,sum(0);
    cin>>num;
    while(num>0)
    {
        rem=num%10;
        sum+=rem;
        num/=10;
    }
    cout<<num<<'\t'<<rem<<'\t'<<sum<<endl;
    return 0;
}