#include <iostream>
using namespace std;

int main()
{
    /*
    int n;
    cin>>n;
    n=(n%4)? ++n : --n;
    cout<<n<<endl;

    int n1,n2,result;
    cin>>n1>>n2;
    result=(n1>n2)? n1-n2 : n1+n2;
    cout<<result<<endl;
    return 0;
    */
    std::ios_base::sync_with_stdio(false);
    cin.tie(0);
    int test;
    cin>>test;
    while(test--)
    {
        int n,i,j,sum(0),temp;
        cin>>n;
        int arr[n];

        for(i=0; i<n; i++)
            cin>>arr[i];
        temp=arr[0]+arr[1];
        
        for(i=0; i<n; i++)
        {    
            sum=arr[i]+arr[i+1];
                if(sum<temp)
                    temp=sum;
            sum=0;
        }
        cout<<temp<<endl;
        
        
    }
    return 0;
}

   