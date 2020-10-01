#include <iostream>
using namespace std;

int main()
{
    int test,flag=0;
    cin>>test;
    while(test--)
    {
        int n,j=0,i=0;
        cin>>n;
        int arr[n]={0},pos[n];
        
        for(j=0,i=0; i<n; i++)
        {    
            cin>>arr[i];
            if(arr[i]==1)
            {    
                pos[j]=i;
                j++;
            }

        }
        
        for(i=0;i<n; i++)
        {
            if(pos[i+1]-pos[i]>=5)
                flag=1;
            else
                flag=0;
        }
        if(flag==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}