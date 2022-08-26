#include<iostream>
#include<cmath>
using namespace std;

long long CountDigit(long long n)
{
    return floor(log10(n)+1);
}

int main() 
{
   long long num;
   cout<<"enter the number : ";
   cin>>num;
   cout<<"the count of digit is : "<<CountDigit(num);
   return 0;
}