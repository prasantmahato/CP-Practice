#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(0);

    int test;
    cin>>test;
    while(test--)
    {
        double gross,basic,hra,da;
        gross=basic=hra=da=0;
        cin>>basic;
        if(basic>1 && basic<1500)
        {
            hra=(basic*10)/100;
            da=basic-hra;
            gross=basic+hra+da;
        }
        else
        {
            hra=500;
            da=(basic*98)/100;
            gross=basic+hra+da;
        }
        
        cout<<fixed<<setprecision(2)<<gross<<endl;
    }
    return 0;
}