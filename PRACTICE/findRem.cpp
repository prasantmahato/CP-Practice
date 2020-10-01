#include <iostream>

using namespace std;

int main()
{
    int T,A,B;
    long int rem;

    cin>>T;
    while (T--)
    {
        cin>>A>>B;
        rem= A % B;
        cout<<rem<<endl;
    }
    return 0;
}