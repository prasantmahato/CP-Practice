#include <iostream>
using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(0);     cout.tie(0);
    int test=1;
    cin>>test;
    while(test-- && test <=100)
    {
        unsigned long long int a,b,n;
        a=b=n=0;
        cin>>a>>b>>n;
       
        if(n%2 == 0)
        {
            a*=n;
            b*=n;
        }
        else
            b*=n;
        
        if(a>b)
            cout<<a/b<<endl;
        else
            cout<<b/a<<endl;
    }
    return 0;
}