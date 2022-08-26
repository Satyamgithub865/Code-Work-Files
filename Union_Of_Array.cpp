#include<iostream>
using namespace std;

void UnionOfArray(int a[],int b[],int m,int n)
{
    int i=0,j=0;
    while(i<m && j<n)
    {
        if(i>0 && a[i]==a[i-1])
        {
            i++;
            continue;
        }
        if(j>0 && b[j]==b[j-1])
        {
            j++;
            continue;
        }
        if(a[i]<b[j])
        {
            cout<<a[i]<<" ";
            i++;
        }
        else if(a[i]>b[j])
        {
            cout<<b[j]<<" ";
            j++;
        }
        else
        {
            cout<<a[i]<<" ";
            i++;
            j++;
        }
    }
    while(i<m)
    {
        if(i>0 && a[i]!=a[i-1])
        {
            cout<<a[i]<<" ";
            i++;
        }
    }
    while(j<n)
    {
        if(j>0 && b[j]!=b[j-1])
        {
            cout<<b[j]<<" ";
            j++;
        }
    }
}

int main() 
{
   int a[5]={10,15,15,23,30};
   int b[7]={5,15,23,25,35,100,500};

   UnionOfArray(a,b,5,7);
   return 0;
}