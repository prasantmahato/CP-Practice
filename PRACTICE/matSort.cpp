/*Program to sort a given matrix in ascending (non-decresing) order
INPUT:- 
1.size of matrix to fonm NxN matrix
2. A[N][N] is sorted in row major order
    Eg.   
        N=3;
        size=NxN;
        A[N][N]=1 3 4 2 6 7 5 8 9
OUTPUT:-
Matrix should be sorted:-   1 2 3 4 5 6 7 8 9
*/
#include <iostream>
using namespace std;

int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int size,i,j;
        cin>>size;
        int arr[size][size];

        for(i=0; i<size; i++)
            for(j=0; j<size; j++)
                cin>>arr[i][j];
        
        for(i=0;i<size;i++)
        {
            for(j=0; j<size; j++)
            {
                
            }
        }
    }
}