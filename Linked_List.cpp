#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

class SinglyLinkList
{
   public:
   void createList(Node * &head,int val) // pass the head using & sign
   {
      Node *n=new Node(val);  //creating new node with the given value
      if(head==NULL)
      {
          head=n; // assigning the node to head for the first time
          return;
      }
      Node *temp=head;
      while(temp->next!=NULL)  // traversing the list if it is not empty
      {
          temp=temp->next;
      }
      temp->next=n;  // linking last node with newly created node
   }

   void DisplayList(Node *head)
    {
      Node *temp=head;
      while(temp!=NULL)
      {
          cout<<temp->data<<" --> ";
          temp=temp->next;
      }
      cout<<"NULL";
    }

    void append_Node(Node *&head,int num)
    {
      Node *N=new Node(num);
      if(head==NULL)
      {
          head=N;
          return;
      }
      Node *temp=head;
      while(temp->next!=NULL)
      {
          temp=temp->next;
      }
      temp->next=N;
    } 

    void prepend_Node(Node *&head,int num)
    {
      Node *N=new Node(num);
      if(head==NULL)
      {
          head=N;
          return;
      }
      N->next=head;
      head=N;
    }

    void insert_After_Given_val(Node *&head,int num,int val)
    {
      Node *n=new Node(val);
      if(head==NULL)
      {
          head=n;
          return;
      }
      Node *temp=head;
      while(temp->data!=num)  //searching given data in the linked list
      {
          temp=temp->next;
      }
      Node *temp2=temp->next;
      temp->next=n;             // linking given data node to newly created node
      n->next=temp2;            // linking newly created node to linked list next node
    }

    void Delete_Bigin(Node *&head)
    {
        if(head==NULL)
        {
            cout<<"the linked list is already empty 'Nothing to delete'"<<endl;
        }
        
        Node *curr=head;
        curr=curr->next;
        delete head;
        head=curr;
    }

    void Delete_End(Node *&head)
    {
        if(head==NULL)
        {
            cout<<"the linked list is already empty 'Nothing to delete'"<<endl;
            return;
        }
         
        if(head->next==NULL)  // if there is only one element in the list
        {
            head=NULL;
            delete head;
            return;
        }
    
        Node *curr=head;
        while(curr->next->next!=NULL)
        {
            curr=curr->next;
        }
        delete curr->next;
        curr->next=NULL;
       
    }

    void Delete_After_Given_Val(Node *&head,int num)
    {
        if(head==NULL)
        {
            cout<<"The linked list is already empty"<<endl;
            return;
        }
    
        if(head->next==NULL)
        {
            head=NULL;
            delete head;
            return;
        }
    
        Node *temp=head;
        while(temp->data!=num)
        {
            temp=temp->next;
        }
        Node *next=temp->next->next;
        delete temp->next;
        temp->next=next;

    }
};

int main()
{
    int option;
    SinglyLinkList s1;
    Node *head=NULL;
    do
    {
        cout << "\nWhat operation do you want to perform? Select Option number. Enter 0 to exit." << endl;
        cout << "1. Create_List()" << endl;
        cout << "2. Prepend_Node()" << endl;
        cout << "3. Append_Node()" << endl;
        cout << "4. Insert_After_Given_Value" << endl;
        cout << "5. Delete_First_Node()" << endl;
        cout << "6. Delete_Last_Node()" << endl;
        cout << "7. Delete_After_Given_Value()" << endl;
        cout << "8. Display_List() "<< endl;

        cin >> option;

        switch(option)
        {
            case 0:
               break;

            case 1:
               int size,val;
               cout<<"enter the size of linked list : ";
               cin>>size;
               for(int i=0;i<size;i++)
               {
                   cout<<"enter the value "<<i+1<<" : ";
                   cin>>val;
                   s1.createList(head,val);
               }
               break;

            case 2:
               int pn;
               cout<<"enter the value to be prepended : ";
               cin>>pn;
               s1.prepend_Node(head,pn);
               cout<<"Node prepended"<<endl;
               break;

            case 3:
               int ap;
               cout<<"enter the value to be appended : ";
               cin>>ap;
               s1.append_Node(head,ap);
               cout<<"Node appended"<<endl;
               break;

            case 4:
                int gv,valu;
                cout<<"enter the value after which node is to be inserted : ";
                cin>>gv;
                cout<<"enter the value : ";
                cin>>valu;
                s1.insert_After_Given_val(head,gv,valu);
                cout<<"Node after "<<gv<<" is inserted"<<endl;
                break;

            case 5:
                s1.Delete_Bigin(head);
                cout<<"first node deleted "<<endl;
                break;

            case 6:
                s1.Delete_End(head);
                cout<<"last node deleted "<<endl;
                break;

            case 7:
                int giva;
                cout<<"enter the value after which node is to be deleted : ";
                cin>>giva;
                s1.Delete_After_Given_Val(head,giva);
                cout<<"Node after "<<giva<<" is deleted"<<endl;
                break;

            case 8:
                cout<<"The linked list is : "<<endl;
                s1.DisplayList(head);
                break;

        }

    } while (option!=0);
    

    return 0;
}