#include<bits/stdc++.h>
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
   void createList(Node * &head,vector<int> v) 
   {
       if(v.size()==0)
       {
           return;
       }
       Node *n=new Node(v[0]);
       head=n;
       Node *temp=head;
       for(int i=1;i<v.size();i++)
       {
           Node *n=new Node(v[i]);
           temp->next=n; 
           temp=temp->next; 
       } 
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
      cout<<"\n";
    }

    void addList(Node *head1,Node *head2,vector<int> v1,vector<int> v2)
    {
        vector<int> sum;
        Node *temp1=head1;
        Node *temp2=head2;
        int carry=0;
        while(temp1!=NULL && temp2!=NULL)
        {
            int add = temp1->data + temp2->data + carry;
            if(add>9)
            {
                sum.push_back((add)%10);
                carry=1;
            }
            else{
                sum.push_back(add);
                carry=0;
            }
            temp1=temp1->next;
            temp2=temp2->next;
        }
        while (temp1!=NULL)
        {
            int add = temp1->data + carry;
            if(add>9)
            {
                sum.push_back((add)/10);
                carry=1;
            }
            else{
                sum.push_back(add);
                carry=0;
            }
            temp1=temp1->next;
        }

        while (temp2!=NULL)
        {
            int add = temp2->data + carry;
            if(add>9)
            {
                sum.push_back((add)/10);
                carry=1;
            }
            else{
                sum.push_back(add);
                carry=0;
            }
            temp2=temp2->next;
        }
        
        Node *headsum=NULL;
        createList(headsum,sum);
        DisplayList(headsum);
    }
};

int main()
{
    vector<int> arr1={9,9,9};
    vector<int> arr2={9,9,9};
    Node *head1=NULL;
    Node *head2=NULL;
    SinglyLinkList s;
    s.createList(head1,arr1);
    s.createList(head2,arr2);
    s.DisplayList(head1);
    s.DisplayList(head2);
    s.addList(head1,head2,arr1,arr2);
    return 0;
}