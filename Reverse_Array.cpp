#include<iostream>
using namespace std;

void ReverseArray(int arr[],int n)
{
    int low = 0, high = n-1;

    while(low<high)
    {
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low++;
        high--;
    }
    cout<<"after :"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"  ";
    }
}

int main() 
{
   int arr[5]={10,20,30,40,50};
   cout<<"before :"<<endl;
   for(int i=0;i<5;i++)
   {
       cout<<arr[i]<<"  ";
   }
   cout<<endl;
   ReverseArray(arr,5);
   return 0;
}