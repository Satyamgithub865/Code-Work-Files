#include<iostream>
using namespace std;

int LomutoPartition(int arr[],int l, int h)
{
    int pivot = arr[h];  // pivot is always the last element of the array
    int i=l-1;
    for(int j=l;j<=h-1;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[h]);
    
    return (i+1);
}

int main() 
{
   int a[10]={10,15,23,5,8,45,96,100,14,25};
   int res = LomutoPartition(a,0,9);

   cout<<"pivot index is : "<<res<<endl;
   for(int i=0;i<10;i++)
   {
       cout<<a[i]<<" ";
   }
   return 0;
}