#include <iostream>
#include <algorithm>
using namespace std;


int  main()
{
    int test=0;
    cin>>test;
    while(test--)
    {
        int N=0;
        cin>>N;
        
        int matrix[N][N];
        int max=(N*N);
        int i,j;
        i=j=0;

        for(i=0; i<=N; i++)
        {
            for(j=0; j<=N; j++)
            {
                matrix[i][j] = (i-1) * N+j;
            }
        }

        for(int i=0; i<=N; i++)
        {   
            for(int j=0; j<=N; j++)
                cout<<matrix[i][j]<<" ";
            cout<<endl;
        }
        cout<<"\nTransposed Matrix: \n";
        for(int i=0; i<=N; i++)
        {   
            for(int j=0; j<=N; j++)
                cout<<matrix[j][i]<<" ";
            cout<<endl;
        }

    }

    return 0;
}