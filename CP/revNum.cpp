#include <iostream>

using namespace std;

int main()
{
    long int num,rev,rem;
    int test;

    cin>>test;
    while(test--)
    {
        num=rev=rem=0;
        cin>>num;
        while(num)
        {
            rem=num%10;
            rev=(rev*10)+rem;
            num/=10;
        }
        cout<<rev<<endl;
    }
    return 0;
}