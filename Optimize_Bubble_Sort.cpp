#include<iostream>
using namespace std;

void BubbleSort(int arr[])
{
    int rounds=0;
    for(int i=0;i<5;i++)
    {
        int flag=false;
        rounds++;
        for(int j=0;j<(5-i-1);j++)
        {
            if(arr[j]>arr[j+1])
            {
                flag=true;
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }

        if(flag==false)
        {
            break;
        }
    }
    cout<<endl<<"rounds = "<<rounds;
    
}

int main() 
{
   int myarr[5];
   cout<<"enter 5 elements :";
   for(int i=0;i<5;i++)
   {
       cin>>myarr[i];
   }
   cout<<"before sorting: "<<endl;
   for(int i=0;i<5;i++)
   {
       cout<<myarr[i]<<"  ";
   }

   BubbleSort(myarr);

   cout<<endl<<"after sorting: "<<endl;
   for(int i=0;i<5;i++)
   {
       cout<<myarr[i]<<"  ";
   }
   return 0;
}