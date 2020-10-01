#include <iostream>
#include <math.h>

using namespace std;
int num=0;

void tower_of_brahma(int n,char a, char c,char b,char p)
{
   
    if(n==0)
        exit(0);
    if(n==1)
    {
        cout<<"\nMove Disk "<<n<<" from "<<a<<" to "<<c;
        {
            if((a=='x' || b=='x'|| c=='x') && (a==p || b==p || c==p))
                num++;
        }
    }
    else
    {
        tower_of_brahma(n-1,a,c,b,p);
        tower_of_brahma(n-1,a,b,c,p);
        tower_of_brahma(n-1,b,a,c,p);
    }
}
int main()
{
    int n;
    char p;
    cin>>n>>p;

    tower_of_brahma(n,'X','Y','Z',p);
    cout<<"\n\nMoves:- "<<pow(2,n)-1<<endl;
    cout<<"\nNumber of Moves between X and "<<p<<" is "<<num;
    return 0;
}




