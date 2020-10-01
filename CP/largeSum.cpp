#include <iostream>
#include <vector>
using namespace std;

int long LargeSum(vector<long int> arr)
{
    long int sum=0;
    
    for(int i=0; i<5; i++)
    {
        sum+=arr[i];
    }
    return sum;
}

int main()
{
    vector<long int> arr {1000000001,1000000002,1000000003,1000000004,1000000005};
    long int result= LargeSum(arr);
    cout<<result<<endl;
    return 0;
}