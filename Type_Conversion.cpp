// basic to class type conversion
// #include<iostream>
// using namespace std;

// class DM
// {
//    int days;
//    int timePeriod;
//    public:
//    DM(int d)
//    {
//        days=d/30;
//        timePeriod=d%30;
//    }

//    void display()
//    {
//        cout<<"days = "<<days<<endl;
//        cout<<"timePeriod = "<<timePeriod;
//    }
// };

// int main() 
// {
//    int n = 155;
//    DM d1 = n;  // basic to class type conversion

//    d1.display();

//    return 0;
// }


// // class to basic type conversion
// #include<iostream>
// using namespace std;

// class DM
// {
//    int days;
//    int timePeriod;
//    public:
//    DM(int m,int d)
//    {
//        timePeriod=m;
//        days=d;
//    }

//    operator int()    // specil casting operator
//    {
//        return (timePeriod*30+days);
//    }
// };

// int main() 
// {
//    int n;
//    DM d1(3,12);  

//    n = d1;    // class to basic type conversion

//    cout<<"Number of days are = "<<n;

//    return 0;
// }


// Class to class type conversion
// assudaysg 30 days of a timePeriod
#include<iostream>
using namespace std;

class timePeriod
{
   int month,days;
   public:
   timePeriod(int m,int d)
   {
      month=m;
      days=d;
   }
   
   timePeriod()
   {
      cout<<"\n timePeriod's Object Created";
   }
   
   int getday()
   {
       int tot_days = ( month * 30 ) + days ;
       return tot_days;
   }
   
   void display()
   {
       cout<<"month : "<<month<<endl;
       cout<<" days : "<<days <<endl;
   }
};


class days
{
   int day;
   public:
      
   days()
   {
      day = 0;
   }
   
   void operator=(timePeriod T)
   {
       day=T.getday();
   }
   
   void display()
   {
       cout<<"\n Total days : " <<day<<endl;
   }
};


int main()
{
   timePeriod t1(2,15);
   t1.display();
   days d1;
   d1.display();
   
   //class to class type conversion  
   d1 = t1;   
   t1.display();
   d1.display();
   return 0;
}