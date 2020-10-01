#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

void plusMinus(vector<int> arr) 
{
    float pRatio,nRatio,zRatio,i;
    pRatio=nRatio=zRatio=0;
    
    int n=arr.size();
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>arr[i];

    for(i=0; i<n; i++)
    {
        cout<<"\nInside For Loop"<<endl;
        if(arr[i]>0)
        {
            pRatio++;
            cout<<"\n I'M +VE";
        }
        else if(arr[i]<0)
        {
            nRatio++;
            cout<<"\n I'M -VE";
        }
        else 
            zRatio++;
    }
    cout<<pRatio<<"\t"<<zRatio<<"\t"<<nRatio<<endl;
    cout<<fixed;
    cout<<setprecision(5)<<float(nRatio/n)<<endl;
    cout<<setprecision(5)<<float(zRatio/n)<<endl;
    cout<<setprecision(5)<<float(pRatio/n)<<endl;
}

int main()
{
    vector<int> arr{0};
    plusMinus(arr);
    return 0;
}