#include <iostream>
using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    register int test=1;
    cin>>test;
    while (test--)
    {
        long int a,b;
        cin>>a>>b;
        if(a>b)
            cout<<a<<" "<<(a+b)<<endl;
        else if(a==b)
            cout<<b<<" "<<(a+b)<<endl;
        else
            cout<<b<<" "<<(a+b)<<endl;
    }
    return 0;    
}