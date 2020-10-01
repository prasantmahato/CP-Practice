#include <iostream>
#include <limits>

using namespace std;

void bubbleSort(int [],int);

int main()
{
    int arr[50],n,i;
    cout<<"\nEnter the size of the array(max. 50): ";
    cin>>n;

    cout<<"\nEnter the elements: ";
    for(i=0; i<n; i++)
        cin>>arr[i];

    bubbleSort(arr,n);
    
    
    cout<<"\nThe sorted Array by BubbleSort Method is as follows: ";
    for(i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}

void bubbleSort(int arr[], int size)
{
    int tmp,ctr=0;
    int i,j,k;      //Loop Variables

    for(i=0; i<size; i++)
    {
        for(j=0; j<((size-1)-i); j++)
        {
            if(arr[j]>arr[j+1])
            {
                tmp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=tmp;
            }
        }
        cout<<"\nArray After iteration --"<<++ctr<<"--is: ";
        for(k=0; k<size; k++)
            cout<<arr[k]<<" ";
        cout<<endl;
    }
}

