#include<iostream>
using namespace std;

int Partition(int arr[], int s, int e) 
{
   int pivot=arr[e]; 
   int pIndex=s;
   for(int i=s;i<e;i++)
   {
      if(arr[i]<pivot)
      {
         int temp=arr[i];
         arr[i]=arr[pIndex];
         arr[pIndex]=temp;
         pIndex++;
      }
   }

   int temp=arr[e];
   arr[e]=arr[pIndex];
   arr[pIndex]=temp;

   return pIndex;
}
void QuickSort(int arr[],int s, int e)
{
   if(s<e)
   {
      int p=Partition(arr,s,e);
      QuickSort(arr,s,(p-1));
      QuickSort(arr,(p+1),e);
   }
}

int main() 
{
   int size;
   cout<<"enter the size: ";
   cin>>size;
   cout<<"enter "<<size<<" elements :";
   int myarr[size];
   for(int i=0;i<size;i++)
   {
      cin>>myarr[i];
   }
   cout<<"before Quick Sort:"<<endl;
   for(int i=0;i<size;i++)
   {
      cout<<myarr[i]<<"  ";
   }
   cout<<endl;

   QuickSort(myarr,0,(size-1));

   cout<<"after Quick Sort :"<<endl;
   for(int i=0;i<size;i++)
   {
      cout<<myarr[i]<<"  ";
   }

   return 0;
}