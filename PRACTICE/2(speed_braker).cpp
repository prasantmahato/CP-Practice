#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int i, t;          //t=Test Cases
    float a[100];        //input data
    int b[100];          //Precision limit

    cout<<"\nEnter No of Test Cases(max. 100):- ";
    cin>>t;

    
    for(i=0; i<t; i++)
    {    
        cout<<"\nEnter floating no. With precision limit(max 20): ";
        cin>>a[i];
        cin>>b[i];
    }
    
    for(i=0; i<t; i++)
        cout<<setprecision(b[i])<<a[i]<<endl;
    
    return 0;
}