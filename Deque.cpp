#include<iostream>
using namespace std;

class Deque
{
   int front;
   int rear;
   int size;
   int cap;
   int *arr;
   public:
   Deque(int c)
   {
      front = -1;
      rear = -1;
      size = 0;
      cap=c;
      arr = new int[cap] {0};
   }

   bool isFull()
   {
       return (cap==size);
   }

   bool isEmpty()
   {
       return (size==0);
   }

   void insertFront(int x)
   {
       if(isFull())
       {
           cout<<"........The Deque is FULL you cant insert....."<<endl;
       }
       else if(isEmpty())
       {
           front = 0;
           rear = 0;
           arr[front] = x;
           size++;
       }
       else
       {
           front = (front-1+cap)%cap;
           arr[front] = x;
           size++;
       }
   }

   void insertRear(int x)
   {
       if(isFull())
       {
           cout<<"........The Deque is FULL you cant insert....."<<endl;
       }
       else if(isEmpty())
       {
           front = 0;
           rear = 0;
           arr[rear] = x;
           size++;
       }
       else
       {
           rear = (rear+1)%cap;
           arr[rear] = x;
           size++;
       }
   }

   int popFront()
   {
       int pi=0;
       if(isEmpty())
       {
           cout<<"........The Deque is EMPTY you cant pop....."<<endl;
           return -1;
       }
       else
       {
           pi = arr[front];
           front = (front+1)%cap;
           size--;
           return pi;
       }
   }

   int popBack()
   {
       int pb=0;
       if(isEmpty())
       {
           cout<<"........The Deque is EMPTY you cant pop....."<<endl;
           return -1;
       }
       else
       {
           pb = arr[rear];
           rear = (rear-1+cap)%cap;
           size--;
           return pb;
       }
   }

   int count()
   {
       return size;
   }

   void display()
   {
       for(int i=0;i<cap;i++)
       {
           cout<<arr[i]<<" ";
       }
   }
};

int main() 
{
  Deque d1(5);
  int value, option;

  do {
    cout << "\n\nWhat operation do you want to perform? Select Option number. Enter 0 to exit." << endl;
    cout << "1. insert_Front()" << endl;
    cout << "2. insert_End()" << endl;
    cout << "3. delete_Front()" << endl;
    cout << "4. delete_End()" << endl;
    cout << "5. isEmpty()" << endl;
    cout << "6. isFull()" << endl;
    cout << "7. count()" << endl;
    cout << "8. display()" << endl;
    cout << "9. Clear Screen" << endl << endl;

    cin >> option;

    switch (option) {
    case 0:
      break;
    case 1:
      cout << "Enqueue Operation \nEnter an item to Enqueue in FRONT of the Queue" << endl;
      cin >> value;
      d1.insertFront(value);
      break;
    case 2:
      cout << "Enqueue Operation \nEnter an item to Enqueue in REAR of the Queue" << endl;
      cin >> value;
      d1.insertRear(value);
      break;
    case 3:
      cout<<"The front item deleted\n item : "<<d1.popFront()<<endl;
      break;
    case 4:
      cout<<"The rear item deleted\n item : "<<d1.popBack()<<endl;
      break;
    case 5:
      if(d1.isEmpty())
      {
          cout<<"...........The deque is Empty......."<<endl;
      }
      else
      {
          cout<<"...........Not Empty..........."<<endl;
      }
      break;
    case 6:
       if(d1.isFull())
      {
          cout<<"...........The deque is Full......."<<endl;
      }
      else
      {
          cout<<"...........Not Full..........."<<endl;
      }
      break;
    case 7:
      cout << "Count Operation \nCount of items in Queue : " << d1.count() << endl;
      break;
    case 8:
      cout << "Display Function Called - " << endl;
      d1.display();
      break;
    case 9:
      system("cls");
      break;
    default:
      cout << "Enter Proper Option number " << endl;
    }

  } while (option != 0);

   return 0;
}