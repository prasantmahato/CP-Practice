#include <iostream>
using namespace std;

int main()
{
    int test=1;
    cin>>test;
    while(test--)
    {
        long int number=0;
        int countFour=0,rem(0);
        cin>>number;
        while(number>0)
        {
            rem=number%10;
            if(rem==4)
                countFour++;
            number/=10;
        }
        cout<<countFour<<endl;
    }
    return 0;
}