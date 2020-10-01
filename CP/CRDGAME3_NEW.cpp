#include <iostream>
using namespace std;

int countDigits(int);
int Rem_num(int num);

int main()
{
    int test=1;
    cin>>test;
    while(test--)
    {
        long int fpc,fpr;
        cin>>fpc>>fpr;

        int Cnt_C,Cnt_R;
        Cnt_C=countDigits(fpc%10);
        Cnt_R=countDigits(fpr%10);
        
        if(fpc/10  < fpr/10)
            cout<<0<<" "<<countDigits(fpc)<<endl;
        else 
            cout<<1<<" "<<countDigits(fpr)<<endl;        
    }
    return 0;
}


int countDigits(int num)
{
    int count=0;
    while(num != 0)
    {
        num/=10;
        count++;
    }
    return count;
}