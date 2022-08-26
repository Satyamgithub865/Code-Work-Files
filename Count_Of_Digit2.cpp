#include<iostream>
using namespace std;

long long CountDigit(long long n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        return (1 + CountDigit(n/10));
    }

}

int main() 
{
   long long num;
   cout<<"enter a number : ";
   cin>>num;
   cout<<"number of digit is : "<<CountDigit(num); 
   return 0;
}