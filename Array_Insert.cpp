#include<iostream>
using namespace std;

class ArrayInsert
{
    public:
    int InsertElement(int arr[], int n , int x, int pos)
    {
        n++;
        for(int i=n;i>(pos-1);i--)
        {
            arr[i]=arr[i-1];
        }
        arr[pos-1]=x;
        
        for(int j=0;j<n;j++)
        {
            cout<<arr[j]<<"  ";
        }
    }
};

int main() 
{
    ArrayInsert obj;
    int n,x;
    cout<<"enter the size of array :";
    cin>>n;
    int myarr[n];
    cout<<"enter "<<n<<" number of elements : "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>myarr[i];
    }
    cout<<"enter the number to be inserted :";
    cin>>x;
    int pos;
    cout<<"enter the position : ";
    cin>>pos;

    obj.InsertElement(myarr,n,x,pos);

   
   return 0;
}