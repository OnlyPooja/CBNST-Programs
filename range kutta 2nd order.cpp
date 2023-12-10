

#include <iostream>
#include<vector>
#include<math.h>
#include <iomanip>

using namespace std;


float fun(float x,float y)
{
    return (-2*x-y);
}
int main()
{
    float x,y,xo,yo,h,xn,k1,k2;
    cout<<"enter the value of x0 and y0"<<endl;
    cin>>xo>>yo;
    cout<<"enter the value of xn to be predicted"<<endl;
    cin>>xn;
    cout<<"enter the value of h"<<endl;
    cin>>h;
    x=xo;
    y=yo;
    while(x<xn)
    {
        k1=h*fun(x,y);
        k2=h*fun(x+h,y+k1);
        y+=0.5*(k1+k2);
        x=x+h;
    }
    cout<<"x "<<x;
    cout<<" y "<<setw(8)<<y;
}
