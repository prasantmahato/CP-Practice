#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int x;
    float y,amt;
    
    cin>>x>>y;
    amt=y;

    if(x%5 == 0)
    {
        y-=0.5;
        float(amt)=(y-x);
        cout<<setprecision(2)<<amt;
    }
    else
        cout<<setprecision(2)<<amt;
    return 0;
}
