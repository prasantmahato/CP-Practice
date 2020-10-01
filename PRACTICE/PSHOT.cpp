#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    int test;
    cin>>test;
    while(test--)
    {
        int size=0,n=0;
        cin>>size;

        n=2*size;
        char arr[n];
        cin>>arr;

        int goalA, goalB, goalTotal, A=0, B=0;
        goalA=goalB=size;
        goalTotal=2*size;
        
        for(int i=0; i<n; i++)
        {
            if(i%2 == 0)
            {
                if(arr[i] == '1')
                {   A++;    }
                goalA--;
            }
            else
            {
                if(arr[i] == '1')
                {   B++;    }
                goalB--;
            }
            if(A > (B+goalB) || B > (A+goalA))
            {
                goalTotal= i+1;
                break;
            }
        }
        cout<<goalTotal<<"\n";
       
    }
    return 0;
}