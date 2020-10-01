#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//-----Don't change/delete structs-----
struct rational {
   int numerator;
   int denominator;
};
//-----Structs end here


/*Question: Reduce the number 'inputrational' to its lowest form and store it in 'outputrational'
struct rational *inputrational  : Actual rational number to be reduced
struct rational *outputrational : Variable to store the rational number in its lowest form */
void reduce(struct rational *inputrational, struct rational *outputrational) {
    //Write your solution code below this line
    outputrational->numerator=inputrational->numerator/inputrational->denominator;
    outputrational->denominator=inputrational->denominator/inputrational->numerator;
    

}

/* Question: Check whether both the rational numbers obtained in the lowest form are equal or not. 
             Retrun true or false accordingly
*/
bool isEqual(struct rational num1, struct rational num2) {
    //Write your solution code below this line
    if((num1.numerator==num2.numerator) && (num1.denominator==num2.denominator))
        return true;
    else    
        return false;
}


int main()
{
    rational *num1,*num2;
    int x,y;
    x=3;y=9;
    num1->numerator=x;
    num1->denominator=y;
    x=1; y=3;
    num2->numerator=x;
    num2->denominator=y;
    reduce(num1,num2);
    if(isEqual(num1,num2))
        cout<<"\nBoth Rational no are equal"<<endl;
    else
        cout<<"\nBothe Rational no are not equal"<<endl;
    

}