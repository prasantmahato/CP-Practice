#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;

    while(t--)
    {
        long long n;
        cin>>n;
        long long stores,value,person;
        long long ma=INT_MIN;
        for(long long i=0;i<n;++i)
        {
            cin>>stores>>person>>value;
            stores++;
            long long temp=person/stores;
            value=value*temp;
            ma=max(value,ma);
        }
        cout<<ma<<endl;
    }
}