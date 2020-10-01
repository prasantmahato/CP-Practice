#include <iostream>
#include <math.h>

using namespace std;
int dec_bin(int n)
{
    
}

int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        
        int num=0;
        int arr[8]={0};
        int i=0,base=1;
        
        while(n>0)
        {
            arr[i]=n%2;
            n/=2;
            i++;
            cout<<arr[i]<<" ";
            
        }
        cout<<endl;
        for(i=0; i<8; i++)
        {
            if(i%2==0)
                arr[i]=arr[i+1];
            cout<<arr[i]<<" ";
        }
        cout<<n<<endl;
        for(i=7; i>=0; i--)
        {
            num+=pow(arr[i],base);
            base*=2;   
        }
        cout<<num<<endl;
    }
    return 0;
}