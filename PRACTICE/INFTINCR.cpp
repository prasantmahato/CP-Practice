#include <iostream>
#include <algorithm>
using namespace std;

int check(int arr[],int n)
{
    int unique_elements,temp,i;
    unique_elements=temp=i=0;
    for(i=1; i<=n; i++)
    {
        arr[i]+=i;
        //cout<<arr[i]<<" ";
        temp++;
        unique_elements=unique(arr,arr+n)-arr;      //checking duplicates elements in a array 
        /*
        unique_elements=n-unique_elements;
        cout<<"\nUnique Elements:- "<<unique_elements<<endl;
        */
        if(unique_elements>=1)
        {
            temp++;
            return temp;
        }
    }
}
int main()
{
    int test=1;
    cin>>test;
    while (test--)
    {
        int n,i;
        cin>>n;

        int hour;
        int arr[n];     
        
        for(i=1; i<=n; i++)
            cin>>arr[i];
        
        hour=check(arr,n);
        cout<<hour<<endl;
    }
    return 0;    
}