#include <iostream>
using namespace std;

int main(void)
{
    int a,b,diff;
    cin>>a>>b;
    diff=a-b;
    
    if(b<=a && a>0 && b>0)
    {
        if(diff%5==0)
           diff+=1;
        else
            diff-=1;
    }
    cout<<diff<<endl;
    return 0;
}