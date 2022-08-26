#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
    Node *prev;
    Node(int x)
    {
        data = x;
        next = NULL;
        prev = NULL;
    }
    
};

class DoublyLinkedList
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
        n->prev=temp;
    }

    void DisplayList(Node *head)
    {
        Node *temp=head;
        while(temp->next!=NULL)
        {
            cout<<temp->data<<" <--> ";
            temp=temp->next;
        }
        cout<<temp->data<<" <--> ";
        cout<<"NULL"<<endl;
    
        cout<<"the list from reverse : "<<endl;
        while(temp!=NULL)
        {
            cout<<temp->data<<" <--> ";
            temp=temp->prev;
        }
        cout<<"NULL"<<endl;
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
        N->prev=temp;
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
       head->prev=N;
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
        while(temp->data!=num)    //searching given data in the linked list
        {
            temp=temp->next;
        }
        if(temp->next==NULL)
        {
            append_Node(head,val);
        }
        else
        {
           Node *temp2=temp->next;
           temp->next=n;             // linking given data node to newly created node
           n->prev=temp;
           n->next=temp2;     
           temp2->prev=n; 
        }
    }

    void Delete_Bigin(Node *&head)
    {
        if(head==NULL)
        {
            cout<<"the linked list is already empty 'Nothing to delete'"<<endl;
            return;
        }
        
        Node *curr=head;
        curr=curr->next;
        curr->next->prev=NULL;
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
         
        if(head->next==NULL)
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
        curr->next->prev=NULL;
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
        next->prev=temp;
    }

    
};

int main() 
{
    int option;
    DoublyLinkedList d1;
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
                   d1.createList(head,val);
               }
               break;

            case 2:
               int pn;
               cout<<"enter the value to be prepended : ";
               cin>>pn;
               d1.prepend_Node(head,pn);
               cout<<"Node prepended"<<endl;
               break;

            case 3:
               int ap;
               cout<<"enter the value to be appended : ";
               cin>>ap;
               d1.append_Node(head,ap);
               cout<<"Node appended"<<endl;
               break;

            case 4:
                int gv,valu;
                cout<<"enter the value after which node is to be inserted : ";
                cin>>gv;
                cout<<"enter the value : ";
                cin>>valu;
                d1.insert_After_Given_val(head,gv,valu);
                cout<<"Node after "<<gv<<" is inserted"<<endl;
                break;

            case 5:
                d1.Delete_Bigin(head);
                cout<<"first node deleted "<<endl;
                break;

            case 6:
                d1.Delete_End(head);
                cout<<"last node deleted "<<endl;
                break;

            case 7:
                int giva;
                cout<<"enter the value after which node is to be deleted : ";
                cin>>giva;
                d1.Delete_After_Given_Val(head,giva);
                cout<<"Node after "<<giva<<" is deleted"<<endl;
                break;

            case 8:
                cout<<"The linked list is : "<<endl;
                d1.DisplayList(head);
                break;

        }

    } while (option!=0);
    
   return 0;
}