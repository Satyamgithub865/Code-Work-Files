#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin>>n;
   vector<vector<int>> v(n);

   for(int i=0;i<n;i++)
   {
       int x;
       cin>>x;
       for(int j=1;j<3;j++)
       {
           int y;
           cin>>y;
           v[x].push_back(y);
       }

   }
   return 0;
}