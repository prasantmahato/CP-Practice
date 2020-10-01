#include <iostream>

using namespace std;

int main()
{
    int dig[10]={0};
    int min,j;
    long int test,n;        // 1<=TEST<=10^5       &&       10<=N<=10^9      
    n=min=j=0;

    cin>>test;
    while(test--)
    {
        cin>>n;
        while(n>0)
        {
            min=dig[0];
            dig[j]=n%10;
            
            if(dig[j]<min)
            {    min=dig[j];    }

            n/=10;
            j++;
        }
        cout<<min<<endl;
    }
    return 0;
}