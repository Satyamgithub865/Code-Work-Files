#include<iostream>
using namespace std;

int main() 
{
   try
   {
      int a;
      cout<<"enter a number : ";
      cin>>a;
      for(int i=5;i>=0;i--)
      {
          if(i==0)
          {
              throw 0;
          }
          cout<<a<<"/"<<i<<" = "<<(a/i)<<endl;
      }
   }
   catch(int x)
   {
       cout<<"for "<<x<<" division not posible";
   }
   
   
   return 0;
}