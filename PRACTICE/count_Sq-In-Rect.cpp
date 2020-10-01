#include <iostream>
#include <algorithm>
using namespace std;

int countSq(int m, int n)
{
    if(n<m)
        swap(m,n);
    //return (m * (m + 1) * (2 * m + 1) / 6 + (n - m) * m *(m + 1) / 2); 
    return n * (n + 1) * (3 * m - n + 1) / 6; 
}
int countSq_maxsize(int m,int n)
{
    int s=__gcd(m,n);
    int count=(m*n) / (s*s);
    return count;
}
int main()
{
    int test=1;
    cin>>test;
    while(test--)
    {
        int n,m;
        n=m=0;
        cin>>m>>n;
        cout<<countSq_maxsize(m,n)<<endl;
    }
    return 0;
}