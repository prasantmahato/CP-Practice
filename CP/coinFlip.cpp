#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,i,q;
	long long n,g,p;
    cin>>t;
    while(t--)
    {
    	cin>>g;
    	while(g--)
    	{
    	  cin>>i>>n>>q;
		  if(i==q)
		  {
		  	p=n/2;
		  }
		  else
		  {
		    if(n%2==0)
		  	{
		  		p=n/2;
			}
			else
			{ 
			    p=n/2+1;
			}
		  }
		  cout<<p<<"\n";
	    }
	}
}
