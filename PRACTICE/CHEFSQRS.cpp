#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int test=1;
    cin>>test;
    while(test--)
    {
        long int num;
        long int i,sq(0),key=0;
        cin>>num;
        long int arr[num];
        
        for(i=0; i<=num; i++)
        {
            sq=i*i;
            if(sq>=num)
            {
                key=sq-num;
                break;
            }
        }
        cout<<key*key<<endl;
    }
    return 0;
}