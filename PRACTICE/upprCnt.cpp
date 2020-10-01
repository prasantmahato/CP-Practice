#include <iostream>

using namespace std;

int main()
{
    char str[100];
    int i,test,count=0;

    cin>>test;
    while(test--)
    {
        cin>>str;
        for(i=0; str[i]!='\0'; i++)
            if((str[i]>= 65) && (str[i]<=91))
                count++;
        cout<<count<<endl;
        count=0;
    }
    return 0;
}
