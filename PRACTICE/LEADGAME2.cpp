#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned int round=1;
    int lead=0,winner;
    cin>>round;
    while(round-- && round<=10000)
    {
        unsigned int p1,p2;
        int temp,flag;
        p1=p2=flag=temp=0;
        cin>>p1>>p2;

        if(p1>p2)
        {
            temp=p1-p2;
            flag=1;
        }
        else
        {
            temp=p2-p1;
            flag=2;
        }
        
        if(temp>lead)
        {    
            lead=temp;
            winner=flag;
        }
    }
    cout<<winner<<" "<<lead<<endl;
}