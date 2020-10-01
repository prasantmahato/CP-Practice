#include <iostream>
using namespace std;

int main()
{
    long int test=0;
    cin>>test;
    while(test--)
    {
        long int p,h;
        p=h=0;
        cin>>h>>p;
        
        while(p != 0)
        {
            h = (h-p);
            p/=2;
//          cout<<"\nHealth Now: "<<h<<"\t"<<" Power Now: "<<p<<endl;
            if(h <= 0)
            {    
                cout<<"1"<<endl;
                break;
            }
        }
        if(p <= 0 && h>0)
            cout<<"0"<<endl;
                
    }
    return 0;
}