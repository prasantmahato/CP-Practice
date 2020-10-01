#include <iostream>
using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(0);     cout.tie(0);
    unsigned int test=1;
    cin>>test;
    while(test--)
    {
        unsigned int a,b,l;
        a=b=l=0;
        cin>>a>>b>>l;

        if(l < (b*4))
            cout<<"no"<<endl;
        else
            cout<<"yes"<<endl;
    }
    return 0;
}