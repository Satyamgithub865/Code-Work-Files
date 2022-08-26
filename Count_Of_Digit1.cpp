#include<iostream>
using namespace std;

long long CountDigit(long long n)
{
    long long count=0;
    if(n==1)
    {
        return 1;
    }
    while(n!=0)
    {
        n = n/10;
        ++count;
    }
    return count;
}

int main() 
{
   long long num;
   cout<<"enter a number : ";
   cin>>num;
   cout<<"number of digit is : "<<CountDigit(num);   
   return 0;
}