#include<iostream>
using namespace std;

void InsertionSort(int arr[])
{
    int key;
    int j=0;
    for(int i=1;i<5;i++)
    {
         key=arr[i];
         j = i - 1;
         while(j>=0 && arr[j]>key)
         {
              arr[j+1] = arr[j];
              j = j - 1;
         }
         arr[j+1] = key;
    }
}

int main() 
{
     int myarr[5];
     cout<<"enter the elements: ";
     for(int i=0;i<5;i++)
     {
          cin>>myarr[i];
     }
     cout<<"ANSORTED ARRAY: "<<endl;
     for(int i=0;i<5;i++)
     {
          cout<<myarr[i]<<"  ";
     }
     cout<<endl;

     InsertionSort(myarr);

     cout<<"SORTED ARRAY: "<<endl;
     for(int i=0;i<5;i++)
     {
          cout<<myarr[i]<<"  ";
     }
     return 0;
}