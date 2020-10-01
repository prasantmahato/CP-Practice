#include <iostream>
using namespace std;

int main()
{
    int test=1;
    cin>>test;
    while(test--)
    {
        int score=0;
        long int num,a,b,k;
        cin>>num>>a>>b>>k;
        for(int i=0; i<num; i++)
        {
            if(i%a==0 && i%b!=0)
                score++;
            else if(i%a!=0 && i%b==0)
                score++;
        }
        if(score>=k)
            cout<<"Win"<<endl;
        else
            cout<<"Lose"<<endl;
    }
    return 0;
}