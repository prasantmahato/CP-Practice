#include <iostream>

using namespace std;

int main()
{
    long int A[3],B[3];
    int i,test;
    int scrA,scrB;
    i=test=scrA=scrB=0;

    cin>>test;
    while(test--)
    {
        for(i=0; i<3; i++)
            cin>>A[i];
        for(i=0;i<3; i++)
            cin>>B[i];
        for(i=0; i<3; i++)
        {
            if(A[i]<B[i])
                scrB++;
            else if(A[i]>B[i])
                scrA++;               
        }
        cout<<scrA<<" "<<scrB<<endl;
        scrA=scrB=0;
    }    
    return 0;
}