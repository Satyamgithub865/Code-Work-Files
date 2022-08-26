#include<iostream>
using namespace std;

int Count_Set_Bits(int n)
{
    int cnt=0;
    while(n>0)
    {
        if(n%2 !=0)
        {
            cnt++;
        }
        n=n/2;
    }
    return cnt;
}

int main() 
{

     int n;
     cout<<"enter the number:";
    cin>>n;
    cout<<"number of set bits in its binary representation is :"<< Count_Set_Bits(n);
    
   
   return 0;
}