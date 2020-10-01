#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int main()
{
    string s="Hackerank";
    char str[53];
    
    cin.getline(str,sizeof(str));
    
    cout<<endl;
    cout<<s<<" "<<str;
    return 0;
}