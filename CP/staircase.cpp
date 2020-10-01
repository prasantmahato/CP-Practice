#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n=0; 
    cin>>n;

    for(int i=0; i<n; i++)
    {
        
        cout<<setw(n-i)<<"#"<<endl;
        for(int j=i; j<n; j++)
            cout<<"#";
        
        /*cout<<setw(i)<<"#"<<endl;
        for(int j=i; j<n; j++)
            cout<<setw(n-i)<<"#";
        cout<<"#"<<endl;
        */

    }
    return 0;
}