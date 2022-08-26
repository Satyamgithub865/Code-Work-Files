#include<iostream>
using namespace std;

int HoaresPartition(int arr[],int l,int h)
{
    int pivot = arr[l];    // pivot is always the 1st element of array
    int i = l-1;
    int j = h+1;

    while(true)
    {
        for(int k=0;k<=h;k++)         // for printing purpose only
        {
            cout<<arr[k]<<" ";
        }
        cout<<endl;

        do{
            i++;
        }while(arr[i]<pivot);

        do{
            j--;
        }while(arr[j]>pivot);

        if(i >= j)    // if i and j crosses each other then return 
        {
            return j;
        }

        swap(arr[i],arr[j]);
        
    }
}

int main() 
{
   int arr[5] = {9,4,6,3,10};
   int res = HoaresPartition(arr,0,4);
   cout<<"the index is : "<<res<<endl;
   return 0;
}