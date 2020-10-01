#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    int size,i;
    cin>>size;
    int arr[size];
    for(i=0; i<size; i++)
        cin>>arr[i];
    
    sort(arr,arr+size);
    for(i=0; i<size; i++)
        cout<<arr[i]<<endl;
	
	return 0;
}
