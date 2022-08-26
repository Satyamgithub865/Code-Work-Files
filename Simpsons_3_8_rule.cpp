#include<bits/stdc++.h>
using namespace std;

float fun(float);

int main()
{
  float result=1;
  float a,b;
  float h,sum;
  
  int i,j;
  int n;

  cout<<"Enter the range - "<<endl;
  cout<<"Lower Limit a - ";
  cin>>a;
  
  cout<<"Upper Limit b - ";
  cin>>b;
  
  cout<<"\nEnter number of subintervals - ";
  cin>>n;
  
  h=(b-a)/n;
  sum=0;
  sum=fun(a)+fun(b);
  for(i=1;i<n;i++)
  {
    if(i%3==0)
    {
       sum+=2*fun(a+i*h);
    }
    else
    {
       sum+=3*fun(a+(i)*h);
    }
  }
  result=sum*3*h/8;

  cout<<"Value of the integral is \t:"<<result<<endl;
  
  cout<<"Press Enter to Exit"<<endl;

  return 0;
  
}
  

float fun(float x)
{
    float temp;
    temp=1/(1+(x*x));
    return temp;
}
  