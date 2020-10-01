#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int arr[10]={1,1,2,3,4,5,6,7,8,9};
    int unq_ele,i;

    for(i=0;i<10;i++)
        cout<<arr[i]<<" ";
    unq_ele=unique(arr,arr+10)-arr;
    cout<<endl;
    unq_ele=10-unq_ele;
    cout<<"\nUnique elements:- "<<unq_ele<<endl;
    return 0;
    

}