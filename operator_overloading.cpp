#include<iostream>
using namespace std;

class GCS
{
   int a;
   int b;
   int c;
   public:
   GCS(int x,int y)
   {
      a=x;
      b=y;
      cout<<"initial value of a : "<<a<<endl;
      cout<<"initial value of b : "<<b<<endl;
   }
   GCS operator++ ()
   {
      --a;
      --b;
   }

   int operator+()
   {
      c = a-b;
   }
   
   void showdata()
   {
      cout<<"a value after calling ++ operator is : "<<a<<endl;
      cout<<"b value after calling ++ operator is : "<<b<<endl;
   }

   void show()
   {
      cout<<"c value after calling + operator is : "<<c<<endl;
   }
};

int main() 
{
   GCS g1(10,20);
   ++g1;
   g1.showdata();
   +g1;
   g1.show();
   return 0;
}
