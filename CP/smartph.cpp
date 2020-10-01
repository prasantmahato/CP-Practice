#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr,arr+n);
    long long count=0,max1=0;
    for(int i=0;i<n;i++)
    {
        count=arr[i]*(n-i);
        if(max1<count)
            max1=count;
    }
    cout<<max1<<endl;
    return 0;
}
