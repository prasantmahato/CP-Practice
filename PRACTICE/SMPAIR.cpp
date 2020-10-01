#include <iostream>
using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(0);     cout.tie(0);
    
    unsigned long int test=1;
    cin>>test;
    while(test--)
    {
        long long int num;
        cin>>num;
        long long int arr[num];
        long long int min=0;
        register int i,j;

        for(i=0; i<num; i++)
            cin>>arr[i];
        
        min=arr[0]+arr[1];
        for(i=0; i<num; i++)
        {   
            for(j=i+1; j<num; j++)
            {
                if((arr[i]+arr[j]) < min)
                {
                    min=arr[i]+arr[j];
                }
            }
        }
        cout<<min<<endl;
    }
    return 0; 
}