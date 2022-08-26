#include<iostream>
using namespace std;

int LinearSearch(int arr[], int size, int x)
{
    for(int i=0;i<size;i++)
    {
       if(arr[i]==x)
       {
            return i;
       }
      
    }

    return -1;
}

int main() 
{
   int myarr[20];
   int n,num;
   cout<<"enter the size of array: ";
   cin>>n;
   cout<<"enter elements : ";
   for(int i=0;i<n;i++)
   {
       cin>>myarr[i];
   }
   cout<<"enter the element you want to search: ";
   cin>>num;

   int result = LinearSearch(myarr,n,num);

   if(result== -1)
   {
       cout<<"no match found";
   }
   else
   {
       cout<<"match found at position : "<<result +1;
   }
   
   return 0;
}