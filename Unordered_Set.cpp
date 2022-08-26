#include<iostream>
#include<unordered_set>
using namespace std;

int main() 
{
   unordered_set<int> s;
   // insertion of elements in the unordered set
   s.insert(5);
   s.insert(10);
   s.insert(15);
   s.insert(25);
   s.insert(75);
   s.insert(100);
   s.insert(65);

   // printing size of the unordered set
   cout<<"the size is : "<<s.size()<<endl;
   
   // printing unordered set
   for(int x:s)
   {
      cout<<x<<"  ";
   }
   cout<<endl;

   // printing unordered set
   for(auto it = s.begin();it!=s.end();it++)
   {
      cout<<*it<<" ";
   }
   cout<<endl;

   // searching an element in the unordered set
   auto it = s.find(15); // find() function returns an iterator
   if(it==s.end())
   {
      cout<<"the element not found"<<endl;
   }
   else
   {
      cout<<"element found "<<(*it)<<endl; // since 'it' holds the address returned by the find() function so
   }                                                  // in order to fetch the value we have to dereference it.

   // searching using count() function
   if(s.count(25))  // count() function simply returns 1 if the element is present and 0 if not present
   {
      cout<<"element found "<<endl;
   }

   // erase function
   s.erase(10); //erasing single element

   //erasing within a range
   s.erase(s.find(25),s.end());

   // printing unordered set
   for(int x:s)
   {
      cout<<x<<"  ";
   }
   cout<<endl;
   return 0;
}