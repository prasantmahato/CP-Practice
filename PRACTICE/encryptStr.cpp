#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char str[]={};
    int key;
    cin>>str>>key;
    
    int len=strlen(str);
    
    for(int i=0; i<=len; i++)
    {
        if(isupper(str[i]))
        {
            if(str[i]+key > 90)
            {
                str[i]+=90-26-key;
            }
            else
                str[i]+=key;
        }
        if(islower(str[i]))
        {
            if(str[i]+key > 122)
            {
                str[i]+=122-26-key;
            }
            else
                str[i]+=key;
        }
    }
    cout<<"\nEncrypted String: "<<str<<endl;
    return 0;    
}