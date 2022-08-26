#include<iostream>
using namespace std;

class ArraySearch
{
    public:
    int SearchElement(int arr[], int n , int x)
    {
        for(int i=0;i<n;i++)
        {
            if(arr[i]==x)
            {
                return i;
            }
        }
    }
};

int main() 
{
    int t;
    cout<<"how many times you run this : ";
    cin>>t;
    while(t--)
    {
        ArraySearch obj;
        int n,x;
        cout<<"enter the size of array :";
        cin>>n;
        int myarr[n];
        cout<<"enter "<<n<<" number of elements : "<<endl;
        for(int i=0;i<n;i++)
        {
            cin>>myarr[i];
        }
        cout<<"enter the number to be searched :";
        cin>>x;

        cout<<"the number is present at index : "<< obj.SearchElement(myarr,n,x);

    }
   
   return 0;
}