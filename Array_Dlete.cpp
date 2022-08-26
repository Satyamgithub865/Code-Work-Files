#include<iostream>
using namespace std;

void DeleteElementInArray(int arr[],int n,int idx)
{
    for(int i=idx;i<n;i++)
    {
        arr[i]=arr[i+1];
    }
    for(int j=0;j<n-1;j++)
    {
        cout<<arr[j]<<" ";
    }
}

int main() 
{
   int arr[5]={12,45,75,36,84};
   int idx;
   cout<<"enter the position:";
   cin>>idx;
   
   DeleteElementInArray(arr,5,idx);
   return 0;
}