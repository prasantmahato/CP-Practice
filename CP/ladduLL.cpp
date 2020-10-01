#include <iostream>
using namespace std;

int main() 
{
    int t,n,laddu;
    string s,act;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        laddu=0;
        cin>>n;
        cin>>s;
        for(int j=0;j<n;j++)
        {
            cin>>act;
            if(act[0]=='T')
            {
                laddu=laddu+300;
            }
            if(act[0]=='B')
            {
                int l;
                cin>>l;
                laddu=laddu+l;
            }
            if(act[8]=='H')
            {
                laddu=laddu+50;
            }
            if(act[8]=='W')
            {
                int l;
                cin>>l;
                if(l<20)
                    laddu=laddu+300+(20-l);
                else
                    laddu=laddu+300;
            }
        }
        if(s[0]=='I')
        {
            laddu=laddu/200;
            cout<<laddu<<"\n";
        }
        else
        {
            laddu=laddu/400;
            cout<<laddu<<"\n";
        }
    }
	return 0;
}
