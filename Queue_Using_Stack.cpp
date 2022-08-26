#include<iostream>
using namespace std;

#define N 5  
int stack1[5], stack2[5];
int top1=-1, top2=-1;   
int count=0;  
  
void push1(int data)  
{  
   if(top1==N-1)  
   {  
      cout<<"\n Stack is overflow...";  
   }  
   else  
   {  
      top1++;   
      stack1[top1]=data;   
   }  
}  

int pop1()  
{  
   if(top1==-1)  
   {  
      cout<<"\nStack is empty..";  
   }  
   else  
   {  
      int a=stack1[top1];  
      top1--;   
      return a;   
   }  
}   
  
void push2(int x)  
{  
   if(top2==N-1)  
   {  
      cout<<"\nStack is full..";  
   }  
   else  
   {  
      top2++;   
      stack2[top2]=x;  
   }    
}   

int pop2()  
{  
   int element = stack2[top2]; 
   top2--;  
   return element;  
}   
void enqueue(int x)  
{  
    push1(x);  
    count++;  
}  
void dequeue()  
{  
   if((top1==-1) && (top2==-1))  
   {  
      cout<<"\nQueue is empty";  
   }  
   else  
   {  
      for(int i=0;i<count;i++)  
      {  
         int element = pop1();  
         push2(element);  
      }  
      int b= pop2();  
      cout<<"\nThe dequeued element is "<< b;  
      cout<<"\n";  
      count--;  
      for(int i=0;i<count;i++)  
      {  
         int a = pop2();  
         push1(a);   
      }  
   }
}   
void display()  
{  
   cout<<"the stack is : ";
   for(int i=0;i<=top1;i++)  
  {  
     cout<<stack1[i]<<"  ";  
  }  
}  
int main()  
{  
   int val,num;
   do
   {
      cout << "\n\nWhat operation do you want to perform? Select Option number. Enter 0 to exit." << endl;
      cout << "1. Enqueue()" << endl;
      cout << "2. Dequeue()" << endl;
      cout<<"3. Display()"<<endl;

      cin>>val;

      switch(val)
      {
         case 0:
            break;
         case 1:
            cout<<"enter a enque value : ";
            cin>>num;
            enqueue(num);
            break;
         case 2:
            dequeue();
            break;
         case 3:
            display();

      }
   }while(val!=0);
   
   return 0; 
}  