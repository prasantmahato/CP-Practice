#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char str[80];
    //char ch;
    int i=0,j=0,T=0;
    int cmp[80];
    
    cin>>T;
    while(T--)
    {
        cin>>str;
        
        for(i=0; str[i]!='\0'; i++)
        {
            for(j=0; j<i; j++)
            {
                if(str[j]==str[i])
                    cmp[i]++;
            }
        }
        cout<<cmp[i]<<endl;
    }
    return 0;
}