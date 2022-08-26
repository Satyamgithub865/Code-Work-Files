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

Node  *createList(Node *head,int val) // pass the head using & sign
{
    if(val==-1)
    {
        return head;
    }
    Node *n=new Node(val);  //creating new node with the given value
    if(head==NULL)
    {
        head=n; // assigning the node to head for the first time
        return head;
    }
    Node *temp=head;
    while(temp->next!=NULL)  // traversing the list if it is not empty
    {
        temp=temp->next;
    }
    
    temp->next=n;  // linking last node with newly created node
    return head;
}

void DisplayList(Node *head)
{
    Node *temp=head;
    while(temp->next!=NULL)
    {
        cout<<temp->data<<" --> ";
        temp=temp->next;
    }
    cout<<temp->data<<" --> ";
    cout<<"NULL"<<endl;
}

Node *ReverseList(Node *head)
{
    if(head==NULL)
    {
        cout<<"The list is already empty"<<endl;
    }
    Node *curr=head;
    Node *prev=NULL;
    while(curr!=NULL)
    {
        Node *next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

Node *ConcatenateList(Node *head1,Node *head2)
{
    if(head1==NULL)
    {
        return head2;
    }
    if(head2==NULL)
    {
        return head1;
    }
    Node *head = head1;
    Node *curr = head1;
    while(curr->next!=NULL)
    {
        curr=curr->next;
    }
    curr->next = head2;
    return head;
}


int main()
{
    
    int num1;
    Node *head1 = NULL;
    Node *head2 = NULL;
    cout<<"Creat List1....\nenter data..press -1 to stop entering----"<<endl;
    while(num1!=-1)
    {
        cin>>num1;
        head1 = createList(head1,num1);
    }
    
    int num2;
    cout<<"Creat List2....\nenter data..press -1 to stop entering----"<<endl;
    while(num2!=-1)
    {
        cin>>num2;
        head2 = createList(head2,num2);
    }

    cout<<"List1 : ";
    DisplayList(head1);
    cout<<endl;

    cout<<"List2 : ";
    DisplayList(head2);
    cout<<endl;

   cout<<"\nConcatenated List : ";
   head1 = ConcatenateList(head1,head2);
   DisplayList(head1);
   cout<<endl;

   cout<<"\nReverse of List : ";
   head1 = ReverseList(head1);
   DisplayList(head1);

    return 0;
}