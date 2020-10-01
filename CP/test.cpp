#include <iostream>

using namespace std;

int main()
{
    int n;
    x:
        cin>>n;
        if(n!=42)
        {
            cout<<n<<endl;
            goto x;
        }
    return 0;
}