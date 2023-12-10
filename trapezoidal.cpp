/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<vector>
#include<math.h>
using namespace std;


float fun(float x)
{
    return log(x);
}
int main()
{
    float l,u,h,n;
    cout<<"enter lower limit";
    cin>>l;
    cout<<"enter upper limit";
    cin>>u;
    cout<<"enter value of n";
    cin>>n;
    h=(u-l)/n;
    vector<vector<float>>v(n+1,{0.0,0.0});
    for(int i=0;i<=n;i++)
    {
        float y=fun(l);
        v[i][0]=l;
        v[i][1]=y;
        l+=h;
    }
    float temp1=0;
    for(int i=1;i<n;i++)
    {
        temp1+=v[i][1];
    }
    float ans=(h/2)*(v[0][1]+v[n][1]+2*temp1);
    cout<<ans;
}
