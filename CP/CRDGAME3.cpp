#include <iostream>
using namespace std;

struct players
{
    int score;
    int power;
    long int finalPower;
    int value;
    int num_Digits;
}chef,rick;



long int countDigits(long num)
{
    int count=0;
    while(num != 0)
    {
        num/=10;
        ++count;
    }
    return count;
}

/*
int powerSum(long int num)
{
    int sum=0;    
    while(num != 0)
    {
        sum+=num%10;
        num/=10;
    }
    return sum;
}
*/

int one_modDown(long int num)
{
    int rem=num%10;
    num-=rem;
    return (num);
}

int main()
{
    chef.value=0;
    rick.value=1;
    
    int test=1;
    cin>>test;
    while(test--)
    {
        cin>>chef.finalPower>>rick.finalPower;
        
        chef.power = powerSum(chef.finalPower);
        rick.power = powerSum(rick.finalPower);

        chef.num_Digits = countDigits(chef.finalPower);
        rick.num_Digits = countDigits(rick.finalPower);

      
        if(one_modDown(chef.finalPower) < one_modDown(rick.finalPower))
            cout<<chef.value<<" "<<countDigits(one_modDown(chef.finalPower))<<endl;
        else 
            cout<<rick.value<<" "<<countDigits(one_modDown(rick.finalPower))<<endl;
    }

    return 0;       
}



