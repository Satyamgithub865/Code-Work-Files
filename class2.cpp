#include<iostream>
#include<math.h>
using namespace std;

class calculateSD
{
  private:
  float sum = 0.0,mean,standardDeviation = 0.0;
  int i;

  public:
  float calculateSDv(float data[])
  {

    for(i = 0; i < 10; ++i)
    {
       sum += data[i];
    }

    mean = sum / 10;

    for(i = 0; i < 10; ++i)
    {
        standardDeviation += pow(data[i] - mean, 2);
    }

    standardDeviation = sqrt(standardDeviation / 10);
   }

   void Display()
   {
       cout<<" standard deviation is = "<<standardDeviation;
   }
};

int main() 
{
   int i;
   float data[10];

   cout << "Enter 10 elements: ";
   for(i = 0; i < 10; ++i) {
     cin >> data[i];
   }

   calculateSD obj;
   obj.calculateSDv(data);
   obj.Display();

    
   return 0;
}