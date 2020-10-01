#include <iostream>
#include <algorithm>
using namespace std;

/*
num=    No. of rounds in the game;
player1[]=  Stores Scores of player1;
player2[]=  Stores Scores of player2; 
lead[]=     Maximun lead gained by any player
*/

int main()
{
    int num,i,j,k;
    j=k=0;
    int player1[num],player2[num],lead1[num],lead2[num];


    cin>>num;
    for(i=0; i<num; i++)
    {
        cin>>player1[i]>>player2[i];
        
        if(player1[i]>player2[i])
        {
            lead1[j]=player1[i]-player2[i];
            j++;
        }
        else
        {
            lead2[k]=player2[i]-player1[i];
            k++;
        }
        int l1,l2;
        l1=sizeof(lead1)/sizeof(lead1[0]);
        l2=sizeof(lead2)/sizeof(lead2[0]);
        sort(lead1,lead1+l1);
        sort(lead2,lead2+l1);

    }
    cout<<endl;
    cout<<"\nFinal Score==> "<<endl;
    if(lead1[j-1]>lead2[k-1])
        cout<<"1 "<<lead1[j-1]<<endl;
    else
        cout<<"2 "<<lead2[k-1]<<endl;
        
    return 0;
    
}