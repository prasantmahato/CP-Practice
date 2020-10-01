#include <bits/stdc++.h>

using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);
    int test,i,j=1;
    unsigned long int n;

    cin>>test;
    while(test--)
    {
        int count=1;
        cin>>n;
        unsigned long int arr[n];
        for(i=0; i<n; i++)
            cin>>arr[i];
        for(i=0; i<n-1; i++)
        {
            if(arr[i]>=arr[i+1])
                count++;
            else
                arr[i+1]=arr[i];
        }
        cout<<count<<endl;
    }
    return 0;
}