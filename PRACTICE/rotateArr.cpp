#include <iostream>

using namespace std;

int main()
{
    int arr[5000],temp[5000];
    long int test;
    int size,rindex,flag,i,j;

    cin>>test;
    while(test--)
    {
        cin>>size>>rindex;
        for(i=0;i<size;i++)
            cin>>arr[i];
        
        for(i=rindex,j=0; i<size; i++,j++)
        {
            temp[j]=arr[i];
            flag=j;
        }
        for(i=0;i<rindex;i++)
        {
            temp[j]=arr[i];
            j++;
        }
        for(i=0;i<size;i++)
        {
            arr[i]=temp[i];
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}