#include <iostream>
#include <algorithm> 
#include <chrono> 
#include <vector>
#include<iomanip>
#include <math.h>

#define e 2.71828

using namespace std;
using namespace std::chrono;


void tower_of_brahma(int n,char a, char c,char b)
{
    
    if(n==0)
        exit(0);
    if(n==1)
    {
        cout<<"\nMove Disk 1 from "<<a<<" to "<<c;
    }
    else
    {
        tower_of_brahma(n-1,a,c,b);
        tower_of_brahma(n-1,a,b,c);
        tower_of_brahma(n-1,b,a,c);
    }
}

void fun()
{
    for(int i=0; i<10; i++)
    {

    }
}
int main()
{
    //vector<int> values(10000);
    clock_t start,end;
    start=clock();

    int n;
    cin>>n;
    tower_of_brahma(n,'X','Y','Z');
    cout<<"\n\nMoves:- "<<pow(2,n)-1<<endl;
    
    
    fun();
    end=clock();
    double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
    
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5); 
    cout << " sec " << endl; 
   /* 
    auto f = []() -> int { return rand() % 10000; }; 
    
    generate(values.begin(), values.end(), f); 
    auto start = high_resolution_clock::now(); 
    
    sort(values.begin(), values.end()); 
    
    auto stop = high_resolution_clock::now(); 
    auto duration = duration_cast<microseconds>(stop - start); 
  
    cout << "\n\nTime taken by function: "
        << duration.count()<< " microseconds" << endl; 
    */
    return 0;
}
