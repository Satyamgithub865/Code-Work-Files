#include<iostream>
using namespace std;

class GCS
{
   int a;
   public:
   GCS()
   {
      a=0;
   }
   GCS(int x)
   {
      a=x;
   }
   GCS operator+(GCS &obj)  // overloading + operator to perform suntraction
   {
      GCS temp;
      temp.a=a-obj.a;
      return temp;
   }
   GCS operator-(GCS &obj)  // overloading - operator to perform addition
   {
      GCS temp;
      temp.a=a+obj.a;
      return temp;
   }
   GCS operator*(GCS &obj)  // overloading * operator to perform division
   {
      GCS temp;
      temp.a=a/obj.a;
      return temp;
   }
   GCS operator/(GCS &obj)  // overloading / operator to perform multiplication
   {
      GCS temp;
      temp.a=a*obj.a;
      return temp;
   }
   
   void showdata()
   {
      cout<<"a = "<<a<<endl;
   }

};

int main() 
{
   GCS g1(10);
   GCS g2(5),gr1;
   gr1=g1+g2;
   gr1.showdata();

   GCS g3(55);
   GCS g4(23),gr2;
   gr2=g3-g4;
   gr2.showdata();

   GCS g5(100);
   GCS g6(20),gr3;
   gr3=g5*g6;
   gr3.showdata();

   GCS g7(10);
   GCS g8(5),gr4;
   gr4=g1/g2;
   gr4.showdata();
   return 0;
}
