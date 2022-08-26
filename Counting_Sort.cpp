#include<iostream>
using namespace std;

void CountingSort(int input_array[], int s, int r)  // s for size and r for range
{
   int output_array[s];
   int count_array[r];

   for(int i=0;i<r;i++)
   {
       count_array[i]=0;
   }

   for(int i=0;i<s;i++)
   {
       ++count_array[input_array[i]];
   }

   for(int i=1;i<r;i++)
   {
       count_array[i] = count_array[i] + count_array[i-1];
   }

   for(int i=0;i<s;i++)
   {
       output_array[--count_array[input_array[i]]] = input_array[i];
   }

   for(int i=0;i<s;i++)
   {
       input_array[i] = output_array[i];
   }
}

int main() 
{
   int size=0,range=10;
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

   CountingSort(myarr,size,range);

   cout<<"after Quick Sort :"<<endl;
   for(int i=0;i<size;i++)
   {
      cout<<myarr[i]<<"  ";
   }
   return 0;
}