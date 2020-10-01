#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test,i=0;
    long int num_game,count_head,count_tail;
    short int init_st,guess_cn;
    unsigned long int num_rnds;

    cin>>test;
    while(test--)
    {
        cin>>num_game;
        while(num_game--)
        {
            count_head=count_tail=0;
            cin>>init_st>>num_rnds>>guess_cn;
            long int coins[num_rnds];

            if(init_st==1)
            {
                coins[num_rnds]={'H'};
                count_head=num_rnds;
            }
            else if(init_st==2)
            {
                coins[num_rnds]={'T'};
                count_tail=num_rnds;
            }
            for(i=0; i<num_rnds; i++)
            {
                if(i%2==0)
                {   
                    coins[i]='T';
                    count_head--;
                    count_tail++;
                }
                else
                {
                    coins[i]='H';
                    count_head++;
                    count_head--;
                }
            }
            if(guess_cn==1)
                cout<<count_head<<endl;
            else if(guess_cn==2)
                cout<<count_tail<<endl;
        }
    }
    return 0;
}