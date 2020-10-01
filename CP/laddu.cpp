#include <bits/stdc++.h>

using namespace std;

class activities
{
    int rank,sev;
    char contest[15];
    char contributor[15];
    char bug[15];
    char hosted[15];

    public:
        int laddus;
        activities()
        {
            laddus=0;
            cin>>contest>>rank;
            cin>>contributor;
            cin>>bug>>sev;
            cin>>hosted;
        }
        void count();
        
        ~activities()
        {}
};

void activities::count()
{
    if(strcmp(contest,"CONTEST_WON")==0)
    {
        if(rank>20)
            laddus+=300;
        else if(rank<=20 && rank>0)
            laddus+=300+(20-rank);
    }
    if(strcmp(contributor,"TOP_CONTRIBUTOR")==0)
        laddus+=300;
    if(strcmp(bug,"BUG_FOUND")==0)
        laddus+=sev;
    if(strcmp(hosted,"CONTEST_HOSTED")==0)
        laddus+=50;
    
}

int main()
{
    int test,i;
    cin>>test;
    while (test--)
    {
        int act; 
        char origin[10];

        cin>>act>>origin;
        activities contest[act];
        for(i=0; i<act; i++)
        {
            activities contest[i];
            contest[i].count();
        }
        if(strcmp(origin,"INDIAN"))
            cout<<contest[i].laddus/200<<endl;
        else if(strcmp(origin,"NON_INDIAN")==0)
            cout<<contest[i].laddus/400<<endl;
        
    }
    
    return 0;
    
}








/* 
cin>>act>>ORIGIN;
        for(j=0,i=0; i<act; i++,j++)
        {
            cin>>str[i[j]]>>rank;
            
        }
        for(j=0,i=0; i<act; i++,j++)
        {
            if(strcmp(str[i[j]],"CONTEST_WON"))
            {
                if(rank<21)
                    laddus+=300+(20-rank);
                else
                    laddus+=300;                
            }
            else if(strcmp(str[i[j]],"TOP_CONTRIBUTOR"))
                laddus+=300;
            else if(strcmp(str,"BUG_FOUND"))
            {
                cin>>sev;
                laddus+=sev;
            }
            else
            {
                laddus+=50;
            }
        }
        if(strcmp(ORIGIN,"INDIAN"))            
                cout<<laddus/200<<endl;
        else if(strcmp(ORIGIN,"NON_INDIAN"))
                cout<<laddus/400<<endl;
*/