#include<iostream>
using namespace std;

class node{
    public:
     int data;
     node* next;
    
    node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
}; 
void insertNode(node* &head,int val)       
{
    node* n=new node(val);
    if(head==NULL)
    {
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
}
node* reverseLinkedList(node* &head)
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    node* prev=NULL;
    node* curr=head;
    node* forward=NULL;
    while(curr!=NULL)
    {
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    head=prev;
    return head;
}
void display(node* head)             
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
    //creating a new node
    node* node1=new node(10);
    
    node* head=node1;
    display(head);

    insertNode(head,20);
    display(head);

    insertNode(head,30);
    display(head);

    insertNode(head,40);
    display(head);

    insertNode(head,50);
    display(head);

    head=reverseLinkedList(head);
    display(head);
}
