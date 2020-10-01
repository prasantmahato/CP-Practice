#include <iostream>
using namespace std;

int main()
{
    int test=1;
    cin>>test;
    while(test--)
    {
        int num=0;
        cin>>num;
        if(num<10 && num>=-20)
            cout<<"What an obedient servant you are!"<<endl;
        else if(num>=10 && num<=20)
            cout<<"-1"<<endl;

    }
    return 0;
}