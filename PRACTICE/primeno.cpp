/*This is a program to implement the algorithm SIEVE OF ERTOSHESNES
    What this algorithm does?
    It gets the prime numbers in the range 2....N,!!
*/

#include <iostream>
using namespace std;

//#define size 100

int main()
{
    int size;
    cin>>size;
    int isPrime[size+1],i,j;
        
    for(i=2; i<=size; i++)      //Initially Assuming all the integers are prime
        isPrime[i]=1;
    
    for(i=2; i*i<=size; i++)    //Marking Non-primes
    {
        if(isPrime[i]==1)       //if is prime then marking multiples of i as non-prime
        {
            for(j=i; i*j<=size; j++)    
                isPrime[i*j]=0;
        }
    }

    /*counting and displaying the the no. of primes*/
    cout<<"\nThe primes no's until "<<size<<" are: "<<endl;
    int countPrime=0;
    for(i=2; i<=size; i++)
    {
        if(isPrime[i])
        {
            countPrime++;
            cout<<i<<",";
        }
    }
    cout<<"::"<<endl;
    cout<<"\nThe number of primes until "<<size<<" are: "<<countPrime<<endl;
    return 0;
}
