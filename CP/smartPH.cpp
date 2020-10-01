#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    long int i,j,sum=0,avg=0;
    int near,revenue=0,count=0;
    
    cin>>n;
    unsigned long long int arr[n];
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    avg=sum/n;
    sort(arr,arr+n);
    for(i=0; i<n; i++,j++)
    {
    
        if(arr[i]>avg)
        {
            near=arr[i];
            count=n-i;
            break;
        }
           
    }
    revenue=near*count;
    cout<<revenue<<endl;
    return 0;
}