#include<bits/stdc++.h>
using namespace std;

#define f(x)       3*x-cos(x)-1
#define df(x)      3+sin(x)

void New_Rap();

int main()
{
    cout<<"Solution by NEWTON RAPHSON method..........."<<endl;
    cout<<"equation is : "<<"\t 3*x - cos(x) - 1 = 0"<<endl;
    New_Rap(); 
    return 0;
}

void New_Rap()
{
    double x1,x0;
    double f0,f1;
    double df0;
    int i=1;
    int itr;
    float EPS;
    float error;
    // finding an approximate root of given equation , having +ve value
    for(x1=0;;x1+=0.01)
    {
        f1=f(x1);
        if(f1>0)
        {
            break;
        }
    }
    // finding an approximate root of given equation , having -ve value
    x0=x1-0.01;
    f0=f(x0);
    cout<<"Enter the number of iterartion : ";
    cin>>itr;
    cout<<"Enter the maximum possible error : ";
    cin>>EPS;

    if(fabs(f0)>f1)
    {
        cout<<"\n\t\t The root is near to : "<<x1;
    }
    if(f1>fabs(f(x0)))
    {
        cout<<"\n\t\t The root is near to : "<<x0;
    }

    x0=(x0+x1)/2;
    for(;i<=itr;i++)
    {
        f0=f(x0);
        df0=df(x0);
        x1=x0-(f0/df0);
        cout<<"\n\t\t The "<<i<<" approximation of the roor is "<<x1;

        error = fabs(x1-x0);

        if(error<EPS)
        {
            break;
        }
        x0=x1;
    }
    if(error>EPS)
    {
        cout<<"\n\n\t NOTE : -  The number of iteration are not sufficient .  ";
    }

    cout<<"\n\n\t\t\t------------------------------------------------------";
    cout<<"\n\t\t\t         The root is : "<<x1;
    cout<<"\n\t\t\t--------------------------------------------------------";

}