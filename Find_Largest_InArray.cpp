#include<iostream>
using namespace std;

int FindLargest(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        bool flag=true;
        for(int j=0;j<n;j++)
        {
            if(arr[j]>arr[i])
            {
                flag=false;
                break;
            }
        }
        if(flag==true)
        {
            return i;
        }
            
    }
}

int main() 
{
   int arr[5]={8,45,2,1,6};
   
   int res=FindLargest(arr,5);
   cout<<"the largesr number : "<<arr[res]<<" at index "<<res;
   return 0;
}