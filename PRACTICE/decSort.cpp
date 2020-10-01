#include <iostream>
#include <limits.h>

using namespace std;

/*
void bubbleSort(long int [], int);

void bubbleSort(long int arr[], long int size)
{
    int i,j;
    long int temp;

    for(i=0; i<size; i++)
    {
        for(j=0; j<(size-1)-i; j++)
        {
            if(arr[j]<arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

}

void insertionSort(long int arr[], long int size)
{
    int pointer,temp;
    int i;

    arr[0]=INT_MIN;
    for(i=1; i<=size; i++)
    {
        pointer=i-1;
        temp=arr[i];
        while(temp<arr[pointer])
        {
            arr[pointer+1]=arr[pointer];
            pointer--;
        }
        arr[pointer+1]=temp;
    }
    

}

void selSort(long int [], int);

void selSort(long int arr[], int size)
{
    int small,pos,temp,i,j;
    small=pos=temp=0;

    for(i=0; i<size-1; i++)
    {
        small=arr[i];
        pos=i;
        for(j=i+1; j<size; j++)
        {
            if(arr[j]<small)
            {
                small=arr[j];
                pos=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[pos];
        arr[pos]=temp;
            
    }
}
*/

int main()
{
    long int arr[10],size;
    int test,i;
    int big,pos,temp,j;
    big=pos=temp=0;
    
    cin>>test;
    while(test--)
    {
        cin>>size;
        for(i=0; i<size; i++)
            cin>>arr[i];
      
        for(i=0; i<size-1; i++)
        {
            big=arr[i];
            pos=i;
            for(j=i+1; j<size; j++)
            {
                if(arr[j]>big)
                {
                    big=arr[j];
                    pos=j;
                }
            }
            temp=arr[i];
            arr[i]=arr[pos];
            arr[pos]=temp;
            
        }
        for(j=0;j<size;j++)
            cout<<arr[j];
        cout<<endl;
    }
    return 0;
}