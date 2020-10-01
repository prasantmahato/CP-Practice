#include <iostream>
#include <string.h>
#include <string>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int test=0;
    cin>>test;
    for(int x=test; test>0; test--)
    {
        string str,evenStr,oddStr;
        cin>>str;
        int len= str.length();
        for(int i=0; i<len; i++)
        {
            if(i%2 == 0)
                evenStr.push_back(str[i]);
            else
                oddStr.push_back(str[i]);
        }
        cout<<evenStr<<"\t"<<oddStr<<endl;
    }

    return 0;
}



