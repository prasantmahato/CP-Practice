#include <iostream>
#include <ctype.h>

using namespace std;

int main()
{
    char ch;
    cin>>ch;
    ch=toupper(ch);
    
    if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
        cout<<"\nVowel"<<endl;
    else
        cout<<"\nConsonant"<<endl;
    
    return 0;
}