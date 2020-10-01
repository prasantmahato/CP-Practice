#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    /*
    vector<int> v={1,2,3,4,5,6,7,8,9,10};

    if(binary_search(v.begin(),v.end(),7))
        cout<<"7 is present."<<endl;
    else
        cout<<"\n7 not found.."<<endl;
    */
    vector<int> arr;
    for(int i=0; i<=10; ++i)
        arr.push_back(i+2);
    
    cout<<"Output of begin()  to end(): "<<endl;
    for(auto i=arr.begin(); i!=arr.end(); ++i)
        cout<<*i<<" ";
    cout<<endl;
    
    cout<<"\nOutput of cbegin() and cend(): "<<endl;
    for(auto i= arr.cbegin(); i!=arr.cend(); ++i)
        cout<<*i<<" ";
    cout<<endl;
    
    cout<<"\nOutput of rbegin() and rend(): "<<endl;
    for(auto ir= arr.rbegin(); ir!=arr.rend(); ++ir)
        cout<<*ir<<" ";
    cout<<endl;

    cout<<"\nOutput of crbegin() and crend(): "<<endl;
    for(auto ir= arr.crbegin(); ir!=arr.crend(); ++ir)
        cout<<*ir<<" ";
    cout<<endl;

    return 0;
}