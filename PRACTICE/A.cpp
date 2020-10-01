#include <iostream>
using namespace std;

int main()
{
    int weight=0;
    cin>>weight;
    
    if(weight<1 || weight>100)
        return -1;

    if((weight/2)%2==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    
    return 0;
}