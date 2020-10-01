#include <iostream>

using namespace std;

void selSort(int [], int);

void selSort(int arr[], int size)
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
            cout<<"\nArray After Pass("<<i+1<<"): ";
            for(j=0;j<size;j++)
                cout<<arr[j]<<"|";
    }
}

int main()
{
        int arr[50], size, i;
        
        cout<<"\nEnter the array size:(max. 50):- ";
        cin>>size;
        cout<<"\nEnter the array elements: "<<endl;
        for(int i=0; i<size; i++)
            cin>>arr[i];
        
        selSort(arr,size);

        cout<<"\n\nThe sorted Array is as follows: "<<endl;
        for(i=0; i<size; i++)
            cout<<arr[i]<<"|";
        cout<<endl;
        return 0;
}
        


       