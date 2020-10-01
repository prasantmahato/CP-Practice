#include <iostream>
using namespace std;

void subarray(int arr[], int size)
{
    int max;
    int i,j,k,x=0;
    max=size*(size+1)/2;
    int subarr[max];

    for(i=0; i<size; i++)
    {
        for(j=i; i<size; j++)
        {
            for(k=i; k<=j; k++)
            {
                subarr[x]=arr[k];
                x++;
            }
        }
    }
}

int gcd(int x, int y)
{
    if((x>y) && (x%y)==0)
        return y;
    else
        gcd(y,(x%y));    
}

int main()
{
    int test;
    cin>>test;

    while(test--)
    {
        int n,i;
        
        cin>>n>>i;
        /*
        int arr[n];
        for(i=0; i<n; i++)
            cin>>arr[i];
        subarray(arr,n);
        */
       cout<<"GCD: "<<gcd(n,i)<<endl;        
    }
    return 0;
}