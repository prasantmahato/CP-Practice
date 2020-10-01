#include <iostream>
using namespace std;

int main()
{
    int arr[100],i=0,j=3;
    arr[0]=j;
    for(i=1,j=3; i<=100; i++,j+=5)
    {
        arr[i]=j;
        cout<<"("<<i<<")"<<arr[i]<<"\t";
        if(i%11==0)
            cout<<endl;
    }
    return 0;
}