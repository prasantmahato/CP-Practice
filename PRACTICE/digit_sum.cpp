#include <iostream>
using namespace std;

int main() {
	int test;
	test=1;
    cin>>test;
	while(test--)
	{
	    int num,rem,sum;
        num=sum=rem=0;
	    cin>>num;
	    while(num>0)
	    {
	        rem=num%10;
	        sum+=rem;
            num/=10;
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
