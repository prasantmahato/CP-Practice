#include <iostream>

using namespace std;

int main()
{
    int T;
    long int sum,rem,N;
    cin>>T;

    while (T--)
    {
        cin>>N;
        sum=rem=0;
        for(int i=N; i>0; i/=10)
        {
            rem=N%10;
            sum+=rem;
            N/=10;
        }
        cout<<sum<<endl;        
    }
    return 0;
}