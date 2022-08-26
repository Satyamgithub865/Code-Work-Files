#include<iostream>
using namespace std;

void BubbleSort(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<(n-i-1);j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
}

int main() 
{
   int n;
   cout<<"enter the size of array :";
   cin>>n;
   int myarr[n];
   cout<<"enter elements :";
   for(int i=0;i<n;i++)
   {
       cin>>myarr[i];
   }
   cout<<"before sorting: "<<endl;
   for(int i=0;i<n;i++)
   {
       cout<<myarr[i]<<"  ";
   }

   BubbleSort(myarr,n);

   cout<<endl<<"after sorting: "<<endl;
   for(int i=0;i<n;i++)
   {
       cout<<myarr[i]<<"  ";
   }
   return 0;
}