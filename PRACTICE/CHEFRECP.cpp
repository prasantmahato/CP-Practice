#include <iostream>
using namespace std;

int main()
{
    int test=1;
    cin>>test;
    while(test--)
    {
        int n,i,j;
        cin>>n;
        int arr[n],count=0;
        for(i=0; i<n; i++){     cin>>arr[i];    }

        for(i=0; i<n; i++)
        {            
            int temp=arr[i];
            for(j=i+1; j<n; j++)
            {
                if(arr[j]==temp)
                {
                    //cout<<arr[i]<<" "<<arr[j]<<endl;
                    count++;
                }
            }
        }
        //cout<<"\nCount: "<<count;
        if(count%2==0)
            cout<<"\nYES"<<endl;
        else
            cout<<"\nNO"<<endl;
    }
    return 0;
}