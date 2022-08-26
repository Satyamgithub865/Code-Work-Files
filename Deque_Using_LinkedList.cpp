#include<iostream>
using namespace std;

class Node
{
    public:
   int data;
   Node *prev;
   Node *next;
   Node(int x)
   {
       data = x;
       prev = NULL;
       next = NULL;
   }
};

class Deque
{
    int size = 0;
   public:
   void insertFront(Node *&front,Node *&rear,int x)
   {
       if(front==NULL && rear==NULL)
       {
           Node *n = new Node(x);
           front = n;
           rear = n;
           size++;
       }
       
       Node *m = new Node(x);
       m->next = front;
       front->prev = m;
       front = m;
       size++;

   }

   void insertRear(Node *&front,Node *&rear,int x)
   {
       if(front==NULL && rear==NULL)
       {
           Node *n = new Node(x);
           front = n;
           rear = n;
           size++;
       }

       Node *p = new Node(x);
       rear->next = p;
       p->prev = rear;
       rear = p;
       size++;
   }

   void display(Node *&front)
   {
       Node *temp = front;
       while(temp!=NULL)
       {
           cout<<temp->data<<" ";
           temp = temp->next;
       }
   }
};

int main() 
{
   Deque d1;
   Node *front = NULL;
   Node *rear = NULL;
  int value, option;

  do {
    cout << "\n\nWhat operation do you want to perform? Select Option number. Enter 0 to exit." << endl;
    cout << "1. insert_Front()" << endl;
    cout << "2. insert_End()" << endl;
    // cout << "3. delete_Front()" << endl;
    // cout << "4. delete_End()" << endl;
    // cout << "5. isEmpty()" << endl;
    // cout << "6. isFull()" << endl;
    // cout << "7. count()" << endl;
    cout << "8. display()" << endl;
    cout << "9. Clear Screen" << endl << endl;

    cin >> option;

    switch (option) {
    case 0:
      break;
    case 1:
      cout << "Enqueue Operation \nEnter an item to Enqueue in FRONT of the Queue" << endl;
      cin >> value;
      d1.insertFront(front,rear,value);
      break;
    case 2:
      cout << "Enqueue Operation \nEnter an item to Enqueue in REAR of the Queue" << endl;
      cin >> value;
      d1.insertRear(front,rear,value);
      break;
    // case 3:
    //   cout<<"The front item deleted\n item : "<<d1.popFront()<<endl;
    //   break;
    // case 4:
    //   cout<<"The rear item deleted\n item : "<<d1.popBack()<<endl;
    //   break;
    // case 5:
    //   if(d1.isEmpty())
    //   {
    //       cout<<"...........The deque is Empty......."<<endl;
    //   }
    //   else
    //   {
    //       cout<<"...........Not Empty..........."<<endl;
    //   }
    //   break;
    // case 6:
    //    if(d1.isFull())
    //   {
    //       cout<<"...........The deque is Full......."<<endl;
    //   }
    //   else
    //   {
    //       cout<<"...........Not Full..........."<<endl;
    //   }
    //   break;
    // case 7:
    //   cout << "Count Operation \nCount of items in Queue : " << d1.count() << endl;
    //   break;
    case 8:
      cout << "Display Function Called - " << endl;
      d1.display(rear);
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