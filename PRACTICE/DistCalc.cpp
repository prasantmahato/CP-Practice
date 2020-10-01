#include <iostream>
#include <cmath>
using namespace std;

#define PI 3.141
int main()
{
    int test=1;
    cout <<"\nEnter No. of Trails:- ";
    cin >> test;
    while(test-- && test<=1000)
    {
        float rpm,rad,time,dist;
        float crmfc;
        rpm=rad=time=crmfc=dist=0;

        cout <<"\nEnter RPM, RADIUS & TIME: "<< endl;
        cin >> rpm >> rad >> time;

        crmfc = 2 * PI * rad;
        dist = crmfc * rpm * time;

        cout<<"\nDistance: "<< floor(dist) <<endl;
    }
    return 0;
}