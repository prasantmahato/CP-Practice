#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(0);     cout.tie(0);
    
    unsigned long int test=1;
    cin>>test;
    while(test--)
    {
        long long int num;
        cin>>num;
        long long int arr[num];
        
        register int i=0;
        for(i=0; i<num; i++)
            cin>>arr[i];
        
        sort(arr,arr+num);
        cout<<arr[0]+arr[1]<<endl;
    }
    return 0; 
}