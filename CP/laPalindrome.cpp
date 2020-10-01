#include <bits/stdc++.h>
using namespace std;

#define NO_OF_CHARS 256

bool isPalindrome(string str)
{
    int i,count[NO_OF_CHARS]={0};

    for(i=0; str[i]; i++)
        count[str[i]]++;
    int odd=0;
    for(i=0; i<NO_OF_CHARS; i++)
    {
        if(count[i] & 1)
            odd++;
        if(odd>1)
            return false;
    }
    return true;
}

int main()
{
    char str[1000];
    int test;

    cin>>test;
    while(test--)
    {
        cin>>str;
        if(isPalindrome(str))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}