/*Program to calculate the exponent of a given Mantissa and Exponent*/

#include <iostream>

using namespace std;

double power_f(double,float);

double power_f(double a,float b)
{
    if(b==0)
        return 1;
    else if(b<0)
        return ((a*power_f(a,b+1)));
    else
        return (a*power_f(a,b-1));
}

int main()
{
    double mantissa;
    float exponent;

    cout<<"\nEnter Mantissa and Exponent:- "<<endl;
    cin>>mantissa>>exponent;

    if(exponent<0)
        cout<<"\nMantissa^Exponent: "<<(1/power_f(mantissa,exponent))<<endl;
    else
        cout<<"\nMantissa^Exponent: "<<power_f(mantissa,exponent)<<endl;
    
    return 0;
    
}