#include <iostream>
#include <algorithm>
using namespace std;

#define max 100 
int arr[max][max];

void createLowerMAtrix(int size)
{
    int i,j;        //  i-> Rows, j-> Columns

    for(i=0; i<size; i++)
    {
        for(j=0;j<size; j++)
        {
            if(i<j)
                arr[i][j]=0;
            else
                cin>>arr[i][j];            
        }
    }
}

int compareSum(int size)
{
    int max_sum,i,j,k;
    max_sum=i=j=k=0;
    int sum[size-1];

    for(i=0,j=0;i<size;i++)
    {
        sum[k]=arr[i][j]+arr[+1][j]+arr[i+1][j+1];
        k++;        
    }
    for(k=0; k<size-1; k++)
    {   
       // cout<<sum[k]<<" ";
        max_sum+=sum[k];    
    }
    return max_sum;

}

int main()
{
    int test=1;
    cin>>test;
    while(test<=1000 && test--) 
    {
        int size,sum;
        size=sum=0;
        cin>>size;
        createLowerMAtrix(size);
        sum=compareSum(size);
        cout<<sum<<endl;
    }
    return 0;
}