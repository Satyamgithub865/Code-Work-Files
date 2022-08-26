#include<iostream>
using namespace std;

int FindLargest(int arr[],int n)
{
    int max=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[max])
        {
            max=i;
        }
    }
    return max;
}

int main() 
{
   int arr[5]={300,45,200,300,300};
   
   int res=FindLargest(arr,5);
   cout<<"the largesr number : "<<arr[res]<<" at index "<<res;
   return 0;
}