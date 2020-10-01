#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int test=1;
    cin>>test;
    while(test--)
    {
        long long int rad=0;
        cin>>rad;
        long double area=0;
        rad=rad*2;
        area=(rad * rad) / 2;
        cout<<fixed<<setprecision(0)<<area<<endl;
    }
    return 0;
}