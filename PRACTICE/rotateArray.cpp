#include <iostream>

using namespace std;

void rotateArry(int a[],int n,int d)
{
    int newArry[n];

    for (int i = 0; i < n; i++)
    {
    	int newIndex = (i+n-d)%n;
    	newArry[newIndex]=a[i];
    }

    for (int i = 0; i < n; i++)
    {
    	cout<<newArry[i]<<" ";
    }
}

int main() 
{
	int t,n,d;
	cin>>t;
	
	while(t--)
    {
	    cin>>n>>d;
	    int arr[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>arr[i];
	    
	    
	    rotateArry(arr,n,d);
	    cout<<endl;
	}
	
	return 0;
}