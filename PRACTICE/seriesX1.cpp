#include <iostream>

using namespace std;

int main()
{
  int testCases,x,i;
  long int result;
  cin>>testCases;
  while(testCases--)
  {
        cin>>x;
        result=((x*x*x)+x);
        cout<<result<<endl;
  }
}