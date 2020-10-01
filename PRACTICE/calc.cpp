#include <iostream>
#include <cmath>
#define pi 3.141

using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        double x,r,t;
        double dist;
        cin>>x>>r>>t;
        x*=t;
        dist=2*pi*r*x;
        cout<<floor(dist)<<endl;
    }
    return 0;
}