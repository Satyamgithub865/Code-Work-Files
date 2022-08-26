#include<iostream>
using namespace std;

int main() 
{
   int num;
   int fact=1;
   cout<<"enter a number : ";
   cin>>num;
   for(int i=1;i<=num;i++)
   {
        fact=fact*i;
   }
   cout<<"the factorial of the given number is : "<<fact<<endl;

   int res=0;
   int n=fact;

   while(n!=0)
   {
       if(n%10==0)
       {
           ++res;
       }
        n=n/10;
   }

   cout<<"number of traling zeroe is : "<<res;

   return 0;
}