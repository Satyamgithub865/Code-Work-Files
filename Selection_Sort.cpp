#include<iostream>
using namespace std;

void SelectionSort(int arr[])
{
    int min;
    for(int i=0;i<4;i++)
    {
        min=i;
        for(int j=i+1;j<5;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
            if(min!=i)
            {
                int temp=arr[min];
                arr[min]=arr[i];
                arr[i]=temp;
            }
        }
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

    SelectionSort(myarr);

    cout<<"SORTED ARRAY: "<<endl;

    for(int i=0;i<5;i++)
    {
        cout<<myarr[i]<<"  ";
    }

     
    return 0;
}