/* Program to count number of diagonals in a polygon */
#include <iostream>

using namespace std;

int main()
{
    int count,test,sides;
    cin>>test;

    while(test--)
    {
        cin>>sides;
        count=(sides*(sides-3))/2;
        cout<<count<<endl;
    }
    return 0;  
}