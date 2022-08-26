#include<iostream>
using namespace std;

void Kth_Bit_Set(int n, int k)
{
    if( (n>>(k-1))&1 !=0)
    {
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
}


int main() 
{
   int n,k;
   cout<<"enter the number:";
   cin>>n;
   cout<<"enter the position:";
   cin>>k;

   Kth_Bit_Set(n,k);
   return 0;
}