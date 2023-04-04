#include<iostream>
using namespace std;

class node{
    public: 
      int data;
      node* prev;
      node* next;

      node(int data)
      {
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
      }
      ~node()
      {
        int val=this->data;
        if(this->next!=NULL)
        {
            delete next;
            this->next=NULL;
        }
        cout<<"memory is free for data"<<val<<endl;
      }
};
void insertAtHead(node* &tail,node* &head,int val)
{
    //empty list
    if(head==NULL)
    {
        node* temp=new node(val);
        head=temp;
        tail=temp;
    }
    else{
    node* temp=new node(val);
    temp->next=head;
    head->prev=temp;
    head=temp;
    }
}
void insertAtTail(node* &tail,node* &head,int val)       //node by reference because we have to modify our linked list
{
    if(tail==NULL)
    {
        node* temp=new node(val);
        tail=temp;
        head=temp;
    }
    else{
    node* temp=new node(val);
    tail->next=temp;
    temp->prev=tail;
    tail=temp; 
    }
}
void insertAtPosition(node* &tail,node* &head,int pos,int val)
{
    if(pos==1)
    {
        insertAtHead(tail,head,val);
        return;
    }
    node* temp=head;
    for (int i = 1; i < pos-1; i++)
    {
        temp=temp->next;
    }
    if(temp->next==NULL)
    {
        insertAtTail(tail,head,val);
        return;
    }
    //creating a new node 
    node* nodeToInsert=new node(val);
    nodeToInsert->next=temp->next;
    temp->next->prev=nodeToInsert;
    temp->next=nodeToInsert;
    nodeToInsert->prev=temp;
}
void deleteNode(int pos,node* &head)
{
    //deleting first or head node
    if(pos==1)
    {
        node* temp=head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;
        delete temp;
    }
    else{
        //deleting last or middle node
        node* curr=head;
        node* prev=NULL;
        for (int i = 1; i <pos; i++)
        {
            prev=curr;
            curr=curr->next;
        }
        curr->prev=NULL;
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}
void display(node* head)             //node by value because we are not modifying our linked list
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
    node* head=NULL;
    node* tail=NULL;
    display(head);

    insertAtHead(tail,head,12);
    display(head);

    insertAtTail(tail,head,22);
    display(head);

    insertAtPosition(tail,head,2,100);
    display(head);

    deleteNode(2,head);
    display(head);

}