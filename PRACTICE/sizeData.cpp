#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   /*
    cout<<"\nSize of Datatypes: \n";
    cout<<"\nINTEGER: "<<setw(4)<<sizeof(int);
    cout<<"\nUNSIGNED INT: "<<setw(4)<<sizeof(unsigned int);
    cout<<"\nFLOAT: "<<setw(4)<<sizeof(float);
    cout<<"\nDOUBLE: "<<setw(4)<<sizeof(double);
    cout<<"\nLONG: "<<setw(4)<<sizeof(long);
    cout<<"\nLONG INT: "<<setw(4)<<sizeof(long int);
    cout<<endl;
    */
    int *ptr;
    int a=10;
    ptr=&a;
    
    cout<<"\na: \t"<<a;
    cout<<"\n&a: \t"<<&a;
    cout<<"\nptr: \t"<<ptr;
    cout<<"\n*ptr: \t"<<*ptr;
    cout<<"\n&ptr: \t"<<&ptr;
    return 0;
}