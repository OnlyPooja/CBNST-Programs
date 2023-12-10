

#include <iostream>
#include<vector>
#include<math.h>
#include <iomanip>

using namespace std;

float f(float x, float y)
{
    return (x-y)/2;
}

int main()
{
    float x,y,xo,yo,xn,h,k1,k2,k3,k4,k;
    cout<<"enter the value of x0 and y0";
    cin>>xo>>yo;
    cout<<"enter the value of h";
    cin>>h;
    cout<<"enter the value of xn to be predicted";
    cin>>xn;
    x=xo;
    y=yo;
    while(x<xn)
    {
        k1=h*f(x,y);
        k2=h*f(x+h/2,y+k1/2);
        k3=h*f(x+h/2,y+k2/2);
        k4=h*f(x+h,y+k3);
        k=(k1+2*k2+2*k3+k4)/6;
       y=y+k;
       x+=h; 
    }
    cout<<setprecision(4)<<setw(8)<<x;
    cout<<setprecision(4)<<setw(8)<<y;
   
}
