#include <iostream>
using namespace std;

int main()
{
    int test=1;
    cin>>test;
    while(test--)
    {
        long double x,x2;
        cin>>x;
        x2=2*x;
        if(int(x)%10 == 0)
            cout<<"0"<<endl;
        
        else if(int(x2)%10 == 0)
            cout<<"1"<<endl;
        else
            cout<<"-1"<<endl;
    }
    return 0;
}