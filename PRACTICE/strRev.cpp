#include <iostream>
#include <string.h>
#include <cstdio> 

#define MAX_LIMIT 2000

using namespace std;

int main()
{
    int test;
    long int len=0;
    int i,k=0;
    char str[MAX_LIMIT],word[MAX_LIMIT];

    cin>>test;
    while(test--)
    {
        cin>>str;
        //fgets(str,MAX_LIMIT,stdin);
        strcat(str,".");
        for(i=0; str[i]!='\0'; i++)
        {
            if(str[i]!='.')
            {
                word[k]=str[i];
                k++;
            }
            else
            {
                while(k>0)
                    cout<<word[--k];
                if(str[i+1]!='\0')
                    cout<<str[i];
            }
        }
        cout<<endl;
    }
    return 0;
}