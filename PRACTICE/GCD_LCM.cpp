#include <bits/stdc++.h>

using namespace std;

long long int GCD(int, int);

long long int GCD(int a,int b)
{
	if(b==0)
	{
		return a;
	}else
	{
		return GCD(b,a%b);
	}
}

int main()
{
    long long int TEST;
    long long int x,y;
    long long int lcm;

    cin>>TEST;
    while (TEST--)
    {
        cin>>x>>y;
        lcm=(x*y)/GCD(x,y);
        cout<<GCD(x,y)<<" "<<lcm<<endl;
    }
    return 0; 
}
