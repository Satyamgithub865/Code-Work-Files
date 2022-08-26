#include<bits/stdc++.h>
using namespace std;


int main()
{
   int n; 
   int i,j,k; 
   
   float mx[10];  
   float my[10];  
   float x; 
   float x0 = 0; 
   float y0; 
   float sum; 
   float h; 
   float fun; 
   float p; 
   float diff[20][20]; 
   float y1, y2, y3, y4; 



   cout<<"\n Enter the number of terms - ";
   cin>>n;
   cout<<"Enter the value in the form of x - "<<endl;
   
   for (i=0;i<n;i++)
   {
       cout<<"Enter the value of x"<<i+1<<": ";
       cin>>mx[i];
   }
   
   cout<<"\n\n Enter the value in the form of y -"<<endl;

   for (i=0;i<n;i++)
   {
       cout<<"Enter the value of y"<<i+1<<": ";
       cin>>my[i];
   }
   
   cout<<"\nEnter the value of x for which you want the value of y - ";
   cin>>x;
   
   h=mx[1]-mx[0];
   for(i=0;i<n-1;i++)
   {
       diff[i][1]=my[i+1]-my[i];
   }
   for (j=2;j<=4;j++)
   {
       for (i=0;i<n-j;i++)
       {
           diff[i][j]=diff[i+1][j-1]-diff[i][j-1];
       }
   }
    
   i=0;
   while(!mx[i]>x)
   {
       i++;
   }
   x0=mx[i];
   sum=0;
   y0=my[i];
   fun=1;
   p=(x-x0)/h;
   sum=y0;
   for (k=1;k<=4;k++)
   {
       fun=(fun*(p-(k-1)))/k;
       sum=sum+fun*diff[i][k];
   }
   
   cout<<"\nwhen x = "<<x<<" y = "<<sum;
   
   cout<<"\n\n\n Press Enter to Exit";
   
   return 0;
}
    