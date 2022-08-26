#include<iostream>
using namespace std;

int BinarySearch(int arr[],int first,int last,int x)
{
     while(first<=last)
   {
       int mid = (first + last)/2;
       if(arr[mid]==x)
       {
           return mid;
       }
       else if(arr[mid]<x)
       {
          first = mid + 1;
       }
       else
       {
           last = mid - 1;
       }
   }

   return -1;
}

int main() 
{
   int n;
   cout<<"enter the size of array :";
   cin>>n;
   
   int myarr[n];
   int num;
   cout<<"enter the elments of array : ";
   for(int i=0;i<n;i++)
   {
       cin>>myarr[i];
   }
   cout<<"enter the elemnet you want to search : ";
   cin>>num;

   int output = BinarySearch(myarr,0,n,num);

   if(output== -1)
   {
       cout<<"no such element in the array";
   }
   else
   {
       cout<<"element found at position : "<< output+1;
   }
  
  
   return 0;
}