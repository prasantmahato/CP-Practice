#include <iostream>
using namespace std;

int main()
{
    int test=1;
    cin>>test;
    while(test--)
    {
        int a,b,res;
        res=a=b=0;
        cin>>a>>b;
        res=a-b;

//        cout<<"\nOriginal Ans:- "<<res<<endl;
        int temp,count;
        count=0;
        temp=res;
        while(temp>0)
        {
            count++;
            temp/=10;
        }
        //cout<<"\nNo of digits:- "<<count<<endl;
        int arr[5];
        for(int i=0; i<count; i++)
        {
            arr[i]=res%10;
            res/=10;            
        }
        for(int i=0; i<count; i++)
            cout<<arr[i];
        cout<<endl;
    }
    return 0;
}