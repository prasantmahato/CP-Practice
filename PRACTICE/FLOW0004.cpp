#include <bits/stdc++.h>
using namespace std;

int firstDig(long int x)
{
    while(x>9)
        x/=10;
    return x;
}

int main()
{
    int test,lastDigit,firstDigit;
    long int num;

    cin>>test;
    while(test--)
    {
        cin>>num;
        lastDigit=num%10;
        firstDigit=firstDig(num);
        cout<<lastDigit+firstDigit<<endl;
    }
    return 0;
}