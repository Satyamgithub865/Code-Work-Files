#include<iostream>
using namespace std;

void PrintIntersection(int a[],int b[],int m, int n)
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
            i++;
        }
        else if(a[i]>b[j])
        {
            j++;
        }
        else
        {
            cout<<a[i]<<"  ";
            i++;
            j++;
        }
    }
}

int main() 
{
   int a[5]={10,15,23,35,50};
   int b[5]={1,12,20,30,55};

   PrintIntersection(a,b,5,5);
   return 0;
}