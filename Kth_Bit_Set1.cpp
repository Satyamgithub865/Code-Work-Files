#include<iostream>
using namespace std;

void Kth_Bit_Set(int n, int k)
{
    if( n & (1<<(k-1)) != 0)
    {
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
}

int main() 
{
   int a,k;
   cout<<"enter the number:";
   cin>>a;
   cout<<"ener the position:";
   cin>>k;

   Kth_Bit_Set(a,k);
   return 0;
}