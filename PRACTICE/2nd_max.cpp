#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{	
	int test;
	cin>>test;
	while(test--)
	{
	    int arr[3],i;
        for(i=0;i<3;i++)
            cin>>arr[i];
        sort(arr,arr+3);
        cout<<arr[1]<<endl;
	}
	return 0;
}