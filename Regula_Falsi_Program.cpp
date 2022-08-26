#include<bits/stdc++.h>
using namespace std;

#define EPS     0.00005
#define f(x)    3*x+sin(x)-exp(x)

void fal_pos();

int main()
{
    cout<<"Solution by false position method..........."<<endl;
    cout<<"Equation is "<<"     "<<"3x + sin(x) - exp(x) = 0 "<<endl;
    fal_pos();
    return 0;
}

void fal_pos()
{
    float f0,f1,f2;
    float x0,x1,x2;
    int itr;
    int i;
    cout<<"Enter the number of iteration : ";
    cin>>itr;

    for(x1=0.0;;)
    {
        f1 = f(x1);
        if(f1>0)
        {
            break;
        }
        else
        {
            x1=x1+0.1;
        }
    }
    x0 = x1-0.1;
    f0 = f(x0);

    cout<<"\n\t\t---------------------------------------";
    cout<<"\n\t\t ITERATION\t x2\t\t  F(x)\n";
    cout<<"\t\t-----------------------------------------";
    for(i=0;i<itr;i++)
    {
        x2 = x0-((x1-x0)/(f1-f0))*f0;
        f2 = f(x2);
        if(f0*f2>0)
        {
            x1=x2;
            f1=f2;
        }
        else
        {
            x0=x2;
            f0=f2;
        }
        if(fabs(f(2))>EPS)
        {
            cout<<"\n\t\t     "<<(i+1)<<"\t       "<<x2<<"\t        "<<f2<<"\n";
        }
    }
    cout<<"\t\t---------------------------------------------";
    cout<<"\n\t\t\t\tRoot = "<<x2<<"\n";
    cout<<"\t\t---------------------------------------------";
}