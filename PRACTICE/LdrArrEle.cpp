#include <iostream>

using namespace std;

int main()
{
    long int test,leader,N,max;
    int i,j;
    cin>>test;

    while(test--)
    {
        cin>>N;
        int arr[N];

        for(i=0; i<N; i++)
            cin>>arr[i];

        for(i=N; i>=0; i--)
        {
            max=arr[i];
            for(j=i;j>=0;j--)
            {
                if(arr[j]>max)
                    leader=arr[j];
                else
                    leader=max;
            }
        }
        cout<<leader<<" ";
    }
    return 0;
}