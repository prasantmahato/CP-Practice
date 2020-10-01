#include <bits/stdc++.h>
using namespace std;


int main()
{
    int i=0,j=0,big,pos;
    long int test,temp;
    cin>>test;

    long int arr[test];

    for(i=0; i<test; i++)
        cin>>arr[i];
    
    for(i=0; i<test-1; i++)
    {
        big=arr[i];
        pos=i;
        for(j=i+1; j<test; j++)
        {
            if(arr[j]>big)
            {
                big=arr[j];
                pos=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[pos];
        arr[pos]=temp;
    }
    for(int i=test-1; i>=0; i--)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}