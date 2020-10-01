#include<bits/stdc++.h>
using namespace std;

int main()
{    
    int t;
    long  long int k,sum,d0,d1,r,d2,i;
    int d[4];
    cin>>t;
    
    while(t--)
    {
        cin>>k>>d0>>d1;
        sum=0;
       
        d2=(d0+d1)%10;
        d[0]=(2*(d0+d1))%10;
        d[1]=(4*(d0+d1))%10;
        d[2]=(8*(d0+d1))%10;
        d[3]=(6*(d0+d1))%10;
        
        sum=d[0]+d[1]+d[2]+d[3];
        sum=d0+d1+d2+sum*((k-3)/4);
        if((k-3)%4!=0)
        {
            r=(k-3)%4;
            for(i=0 ;i<r;i++)
                sum=sum+d[i];
        }
        if(sum%3==0)
            cout<<"YES"<<"\n";
        
        else
            cout<<"NO"<<"\n";
    }
    return 0;
}


