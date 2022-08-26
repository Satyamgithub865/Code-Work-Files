#include<iostream>
#include<unordered_map>
using namespace std;

int main() 
{
   unordered_map<string,int> m;
   m["gfg"]=20;
   m["ide"]=30;
   m.insert({"course",40});
   m.insert({"batch",10});
   
   // printing size
   cout<<"the size is : "<<m.size()<<endl;

   // printing elements
   for(auto x:m)
   {
       cout<<"( "<<x.first<<" "<<x.second<<" )"<<" ";
   }
   cout<<endl;

   // searching element
   auto it = m.find("ide");
   if(it==m.end())
   {
      cout<<"Not foung"<<endl;
   }
   else
   {
       cout<<"Found ("<<(it->first)<<" "<<(it->second)<<")"<<endl;
   }

   // erasing an element
   m.erase("ide");
   for(auto itr=m.begin();itr!=m.end();itr++)
   {
       cout<<"( "<<itr->first<<" "<<itr->second<<" )"<<" ";
   }
   return 0;
}