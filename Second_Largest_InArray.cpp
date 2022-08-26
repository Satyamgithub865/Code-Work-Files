#include<iostream>
using namespace std;

int getLargest(int arr[],int n)
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

int SecondLargest(int arr[],int n)
{
    int largest = getLargest(arr,n);
    int res = -1;
    for(int i=0;i<n;i++)
    {
        if(arr[i] != arr[largest])
        {
            if(res == -1)
            {
               res = i;
            }
            else if(arr[i]>arr[res])
            {
                res = i;
            }
        }
    }

    return res;
}

int main() 
{
   int arr[5]={300,45,2000,30,500};
   
   int resf=SecondLargest(arr,5);
   cout<<"the second largesr number is : "<<arr[resf]<<" at index "<<resf;
   return 0;
}