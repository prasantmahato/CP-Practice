#include <iostream>
using namespace std;

int main()
{
    int test;
    cin>>test;
    int cupcakes,leftovers;
    int packsize=2;
    while(test--)
    {
        cupcakes=0;
        cin>>cupcakes;
        if(cupcakes>2)
            leftovers=cupcakes-packsize;
        else
            leftovers=packsize;
        
        cout<<leftovers<<endl;
    }
    return 0;
}