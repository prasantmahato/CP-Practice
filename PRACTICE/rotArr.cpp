#include <iostream>

using namespace std;

int main()
{
    unsigned int test;
    int N,D,i,j,arr[10],temp[10];

    cin>>test;
    while(test--)
    {
        cin>>N>>D;
        for(i=0;i<N;i++)
            cin>>arr[i];
        
        for(i=N-1; i>=0; i--)
        {
            if((i+D)>=N)
                temp[i+D-N]=arr[i];
            else
                temp[i+D]=arr[i];
        }
        for(i=0;i<N;i++)
        {
            arr[i]=temp[i];
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}