#include <bits/stdc++.h>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int len=s.size();
        int cnt=0;
        for(int i=0;i<len/2;i++)
        {
            for(int j=len/2;j<len;j++)
            {
                if(len%2!=0)
                 s[len/2]='A';

                if(s[i]==s[j])
                {
                    s[j]='A';
                    cnt++;
                    break;
                }
            }
        }
        if(cnt==len/2)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;


    }


    return 0;
}
