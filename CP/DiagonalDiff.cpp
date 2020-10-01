#include <iostream>
#include <vector>
using namespace std;

int diagonalDifference(vector<vector<int>> arr) 
{
    int i,j;
    i=j=0;
    
    int R_dia(0),L_dia(0);
    
    int n=1;
    cin>>n;
    for(i=0; i<n; i++)
        for(j=0; i<n; j++)
            cin>>arr[i][j];
        
    for(i=0; i<n; i++)
    {
        R_dia+=arr[i][i];
        
    }
    for(i=0,j=n; i<n; i++,j--)
    {
        L_dia+=arr[i][j];
    }
    return abs(R_dia-L_dia);    
}

int main()
{
    vector<vector<int>> arr;
    int result = diagonalDifference(arr);
    return 0;
}