#include<iostream>
using namespace std;

int main() 
{
   int n=4;  // number of process
   int bt[4] = {2,2,3,4};  // burst time
   int ar[4] = {0,1,5,6};  //arrival time
   
   int st[4]; // starting time
   st[0]=0;

   for(int i=1;i<n;i++)
   {
       st[i] = st[i-1] + bt[i-1];
       if(st[i]<ar[i])   // when current process yet not arrived in the ready queue
       {
          st[i]=ar[i];
       }
   }
   
   int wt[4];  // waiting time
   wt[0]=0;

   for(int i=1;i<n;i++)
   {
       wt[i] = st[i] - ar[i];
   }

   cout<<"Process   "<<"Burst time  "<<"Arrival time    "<<"Waiting time"<<endl;
   for(int i=0;i<n;i++)
   {
       cout<<"P["<<i+1<<"]        "<<bt[i]<<"            "<<ar[i]<<"                  "<<wt[i]<<endl;
   }

   float sum = 0.0;
   for(int i=0;i<n;i++)
   {
      sum=sum+wt[i];
   }
   cout<<"Average waiting time = "<<sum/n;

   return 0;
}