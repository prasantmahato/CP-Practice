#include <iostream>
using namespace std;

void insertionSort(int [],int);

int main()
{
    int arr[50],n,i;
    cout<<"\nEnter the size of the array(max. 50): ";
    cin>>n;

    cout<<"\nEnter the elements: ";
    for(i=0; i<n; i++)
        cin>>arr[i];

    insertionSort(arr,n);    
    
    cout<<"\nThe sorted Array by Insertion Sort Method is as follows: ";
    for(i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}

void insertionSort(int arr[], int n)  
{  
    int i, key, j;  
    for (i = 1; i < n; i++) 
    {  
        key = arr[i];  
        j = i - 1;  
  
        /* Move elements of arr[0..i-1], that are  
        greater than key, to one position ahead  
        of their current position */
        while (j >= 0 && arr[j] > key) 
        {  
            arr[j + 1] = arr[j];  
            j = j - 1;  
        }  
        arr[j + 1] = key;  
    }  
}  