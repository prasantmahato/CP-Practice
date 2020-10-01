#include <iostream>
using namespace std;

/*
OBJECTIVE:- 
The game is called Count K-Primes. A number is a k-prime if it has exactly k distinct prime factors. 
The game is quite simple. Alice will give three numbers A, B & K to Bob. 
Bob needs to tell Alice the number of K-prime numbers between A & B (both inclusive). 
If Bob gives the correct answer, he gets a point. If not, Alice gets a point. 
They play this game T times.

INPUT:- 
First line of input contains a single integer T, the number of times they play. 
Each game is described in a single line containing the three numbers A,B & K.

OUTPUT:-
For each game, output on a separate line the number of K-primes between A & B.

Constraints:
1 ≤ T ≤ 10000
2 ≤ A ≤ B ≤ 100000
1 ≤ K ≤ 5 

*/

int main()
{
    int rounds=1;
    cin>> rounds;
    while(rounds--)
    {
        int a,b,kp;
        a=b=kp=0;

        cin>>a>>b>>kp;
        int p_factors[b+1] = { 0 }; 
        int count=0;
    
        for (int p = 2; p <= b; p++)  
            if (p_factors[p] == 0)  
                for (int i = p; i <= b; i += p)  
                    p_factors[i]++; 
  
        for (int i = a; i <= b; i++)  
            if (p_factors[i] == kp) 
                count++;

        cout<<count<<endl;
        
    }        
    return 0;
}

