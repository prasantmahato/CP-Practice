#include <iostream>
//#include <conio>

using namespace  std;

int main()
{
	char ch='*';
	int i,j;
	cout<<"\n\t\t\t\tHello World."<<endl;
	
	for(i=0; i<30; i++)
	{
		for(j=50; j!=i; j--)
		{
			cout<<ch<<" ";
		}
		cout<<endl;
	}

	return 0;
}
