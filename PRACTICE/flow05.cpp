#include <iostream>
using namespace std;

/*
    PROGRAM TO COUNT MINIMUM NOTES OF VALUE {1,2,5,10,50,100}
    REQUIRED TO WITHDRAW A CERTAIN AMOUNT
    *   Maximum size of amount is [10,00,000]
    *   LOGIC:- 
    *   DIVIDE THE AMOUNT WITH THE HIGHEST NOTE YOU CAN
    *   STORE THE QOUTIENT IN A VARIABLE ("noteCount") 
    *   AND SUM UP WITH EVERY LOOP 
    *   THEN DIVITE THE AMOUNT WITH THAT NOTE
    *   LOOP TILL AMOUNT BECOMES ZERO
    
        
*/

int main()
{
    register int test=1;
    cin>>test;
    while(test--)
    {
        long int amnt,noteCount=0;
        cin>>amnt;
        while(amnt>0)
        {
            if(amnt>=100)
            {
                noteCount+=(amnt / 100);
                amnt%=100;
            }
            else if(amnt>=50 && amnt<100)
            {
                noteCount+=(amnt / 50);
                amnt%=50;
            }
            else if(amnt>=10 && amnt<50)
            {
                noteCount+=(amnt / 10);
                amnt%=10;
            }
            else if(amnt>=5 && amnt<10)
            {
                noteCount+=(amnt / 5);
                amnt%=5;
            }
            else if(amnt>=2 && amnt<5)
            {
                noteCount+=(amnt / 2);
                amnt%=2;
            }
            else 
            {
                noteCount+=(amnt / 1);
                amnt%=1;
            }
        }
        cout<<"Minimun Notes Required: "<<noteCount<<endl;
    }
    return 0;
}