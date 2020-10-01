#include <iostream>
#include <algorithm>

using namespace std;

#define ll long int

ll addBegin(ll num)
{
    register ll sum=0;
    for(ll i=1; i<=num; i++)
        sum += i;
    
    return sum;
}

ll addEnd(ll num, ll size)
{
    register ll sum=0;
    for(ll i=num; i<=size; i++)
        sum += i;
    
    return sum;
}

int main()
{
    ll test=0;
    cin>>test;
    while(test--)
    {
        ll N;
        cin>>N;
        
        ll sequence[N], sumBegin = 0, sumEnd = 0;
        int counter=0;

        for(ll i=1; i<=N; i++)
            sequence[i] = i;
        
        for(ll i=1; i<=N; i++)
        {
            ll num = sequence[i];
        
            if(num < N)
            {
                swap(num, sequence[i+1]);
                sumBegin = addBegin(num);
                sumEnd = addEnd(num, N);

                if(sumBegin == sumEnd)
                    counter++;
            }
        }
        cout<<counter<<endl;
    }
    return 0;
}