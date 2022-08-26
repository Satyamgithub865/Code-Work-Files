#include<iostream>
using namespace std;

void Merge(int arr[], int l , int m, int r)
{
    int i=l;
    int j=m+1;
    int k=l;
    int temp[5];

    while(i<=m && j<=r)
    {
        if(arr[i]<arr[j])
        {
            temp[k]=arr[i];
            i
            ++;k++;
        }
        else
        {
            temp[k]=arr[j];
            k++;
            j++;
        }
    }

    while(i<=m)       // if the sub array ids exausted it will be dorectly copied to temp array
    {
        temp[k]=arr[i];
        i++;
        k++;
    }
    
    while(j<=r)      // if the sub array ids exausted it will be dorectly copied to temp array
    {
        temp[k]=arr[j];
        j++;
        k++;
    }
    for(int p=l;p<=r;p++)
    {
        arr[p]=temp[p];
    }
}

void MergeSort(int arr[], int l, int r)
{
    if(l<r)
    {
        int mid=(l+r)/2;
        MergeSort(arr,0,mid);
        MergeSort(arr,mid+1,r);
        Merge(arr,l,mid,r);
    }
}

int main() 
{
   int myarr[5];
   cout<<"enter 5 elements :";
   for(int i=0;i<5;i++)
   {
       cin>>myarr[i];
   }
   cout<<"before merge sort:"<<endl;
   for(int i=0;i<5;i++)
   {
       cout<<myarr[i]<<"  ";
   }
   cout<<endl;

   MergeSort(myarr,0,4); // calling the fuction

   cout<<"after merge sort: "<<endl;
   for(int i=0;i<5;i++)
   {
       cout<<myarr[i]<<"  ";
   }
   return 0;
}