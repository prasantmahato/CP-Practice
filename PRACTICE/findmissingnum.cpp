/*PROGRAM TO FIND THE MISSING NUMBER IN THE ARRAY*/
#include<iostream>
#include <algorithm>
using namespace std;

int main()
{
    int size;
    cout<<"\nEnter the size of array: ";
    cin>>size;

    int arr[size],sum=0;
    int num;
    cout<<"\nEnter "<<size<<" array elements: ";
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }

    sort(arr,arr+size);
    cout<<"\n--Finding missing number in size+1 array-- "<<endl;
    int rem=(sum-(arr[size-1]+1));
    num=sum-rem;
    cout<<"\nMissing Number is:- "<<num<<endl;

    return 0;
}