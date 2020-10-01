/*To find an Nth element in the series*/

#include <iostream>
using namespace std;

int main()
{
    int arr[100],i,j,n;
    int no_ofCases,k;

    cin>>no_ofCases;
    
    for(i=0,j=2; i<100; i++,j++)
    {
        arr[i]=arr[i]+j;
    }
    while(no_ofCases--)
    {
        cin>>k;
        cout<<arr[k]<<endl;
    }

    
}