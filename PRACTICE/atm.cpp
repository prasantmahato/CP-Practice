#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float balance;
    int amt;
    cin>>amt>>balance;

    if(amt%5==0 && (amt+0.5)<balance)
        balance-=(amt+0.5);

    cout<<fixed<<setprecision(2)<<balance<<endl;    
    return 0;
}