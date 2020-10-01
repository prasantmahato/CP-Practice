#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int T,n,i;
    int sum,rem,q,arr[8]={0};
    sum=0;

        cin>>n;
        i=7;
        while(n)
        {
            arr[i]=n%2;
            i--;
            n/=2;
        }
        for(i=0; i<8; i++)
            cout<<arr[i];
        cout<<endl;
        for(i=0; i<8; i++)
        {
            if(i%2==0)
                arr[i]=1;
            
            cout<<arr[i];
        }
        cout<<endl;
        for(i=7; i>=0; i--)
        {
            int j=0;
            sum+=arr[i]*pow(2,j);   
            j++;
        }
        cout<<sum;
        cout<<endl;
    return 0;
}